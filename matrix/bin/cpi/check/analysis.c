#ifdef ANDROID
#elif defined(test) && defined(i386)
/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the QtCore module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or (at your option) the GNU General
** Public license version 3 or any later version approved by the KDE Free
** Qt Foundation. The licenses are as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL2 and LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-2.0.html and
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/
#include <AAA/analysis.aaa>
#ifndef QFLAGS_H
#define QFLAGS_H
#include <analysis.aaa>
QT_BEGIN_NAMESPACE
class QDataStream;
class QFlag
{
    int i;
public:
    Q_DECL_CONSTEXPR inline QFlag(int value) noexcept : i(value) {}
    Q_DECL_CONSTEXPR inline operator int() const noexcept { return i; }
#if !defined(Q_CC_MSVC)
    // Microsoft Visual Studio has buggy behavior when it comes to
    // unsigned enums: even if the enum is unsigned, the enum tags are
    // always signed
#  if !defined(__LP64__) && !defined(Q_CLANG_QDOC)
    Q_DECL_CONSTEXPR inline QFlag(long value) noexcept : i(int(value)) {}
    Q_DECL_CONSTEXPR inline QFlag(ulong value) noexcept : i(int(long(value))) {}
#  endif
    Q_DECL_CONSTEXPR inline QFlag(uint value) noexcept : i(int(value)) {}
    Q_DECL_CONSTEXPR inline QFlag(short value) noexcept : i(int(value)) {}
    Q_DECL_CONSTEXPR inline QFlag(ushort value) noexcept : i(int(uint(value))) {}
    Q_DECL_CONSTEXPR inline operator uint() const noexcept { return uint(i); }
#endif
};
Q_DECLARE_TYPEINFO(QFlag, Q_PRIMITIVE_TYPE);
class QIncompatibleFlag
{
    int i;
public:
    Q_DECL_CONSTEXPR inline explicit QIncompatibleFlag(int i) noexcept;
    Q_DECL_CONSTEXPR inline operator int() const noexcept { return i; }
};
Q_DECLARE_TYPEINFO(QIncompatibleFlag, Q_PRIMITIVE_TYPE);
Q_DECL_CONSTEXPR inline QIncompatibleFlag::QIncompatibleFlag(int value) noexcept : i(value) {}
#ifndef Q_NO_TYPESAFE_FLAGS
template<typename Enum>
class QFlags
{
    Q_STATIC_ASSERT_X((sizeof(Enum) <= sizeof(int)),
                      "QFlags uses an int as storage, so an enum with underlying "
                      "long long will overflow.");
    Q_STATIC_ASSERT_X((std::is_enum<Enum>::value), "QFlags is only usable on enumeration types.");
    struct Private;
    typedef int (Private::*Zero);
    template <typename E> friend QDataStream &operator>>(QDataStream &, QFlags<E> &);
    template <typename E> friend QDataStream &operator<<(QDataStream &, QFlags<E>);
public:
#if defined(Q_CC_MSVC) || defined(Q_CLANG_QDOC)
    // see above for MSVC
    // the definition below is too complex for qdoc
    typedef int Int;
#else
    typedef typename std::conditional<
            std::is_unsigned<typename std::underlying_type<Enum>::type>::value,
            unsigned int,
            signed int
        >::type Int;
#endif
    typedef Enum enum_type;
    // compiler-generated copy/move ctor/assignment operators are fine!
#ifdef Q_CLANG_QDOC
    Q_DECL_CONSTEXPR inline QFlags(const QFlags &other);
    Q_DECL_CONSTEXPR inline QFlags &operator=(const QFlags &other);
#endif
    Q_DECL_CONSTEXPR inline QFlags(Enum flags) noexcept : i(Int(flags)) {}
    Q_DECL_CONSTEXPR inline QFlags(Zero = nullptr) noexcept : i(0) {}
    Q_DECL_CONSTEXPR inline QFlags(QFlag flag) noexcept : i(flag) {}
    Q_DECL_CONSTEXPR inline QFlags(std::initializer_list<Enum> flags) noexcept
        : i(initializer_list_helper(flags.begin(), flags.end())) {}
    Q_DECL_RELAXED_CONSTEXPR inline QFlags &operator&=(int mask) noexcept { i &= mask; return *this; }
    Q_DECL_RELAXED_CONSTEXPR inline QFlags &operator&=(uint mask) noexcept { i &= mask; return *this; }
    Q_DECL_RELAXED_CONSTEXPR inline QFlags &operator&=(Enum mask) noexcept { i &= Int(mask); return *this; }
    Q_DECL_RELAXED_CONSTEXPR inline QFlags &operator|=(QFlags other) noexcept { i |= other.i; return *this; }
    Q_DECL_RELAXED_CONSTEXPR inline QFlags &operator|=(Enum other) noexcept { i |= Int(other); return *this; }
    Q_DECL_RELAXED_CONSTEXPR inline QFlags &operator^=(QFlags other) noexcept { i ^= other.i; return *this; }
    Q_DECL_RELAXED_CONSTEXPR inline QFlags &operator^=(Enum other) noexcept { i ^= Int(other); return *this; }
    Q_DECL_CONSTEXPR inline operator Int() const noexcept { return i; }
    Q_DECL_CONSTEXPR inline QFlags operator|(QFlags other) const noexcept { return QFlags(QFlag(i | other.i)); }
    Q_DECL_CONSTEXPR inline QFlags operator|(Enum other) const noexcept { return QFlags(QFlag(i | Int(other))); }
    Q_DECL_CONSTEXPR inline QFlags operator^(QFlags other) const noexcept { return QFlags(QFlag(i ^ other.i)); }
    Q_DECL_CONSTEXPR inline QFlags operator^(Enum other) const noexcept { return QFlags(QFlag(i ^ Int(other))); }
    Q_DECL_CONSTEXPR inline QFlags operator&(int mask) const noexcept { return QFlags(QFlag(i & mask)); }
    Q_DECL_CONSTEXPR inline QFlags operator&(uint mask) const noexcept { return QFlags(QFlag(i & mask)); }
    Q_DECL_CONSTEXPR inline QFlags operator&(Enum other) const noexcept { return QFlags(QFlag(i & Int(other))); }
    Q_DECL_CONSTEXPR inline QFlags operator~() const noexcept { return QFlags(QFlag(~i)); }
    Q_DECL_CONSTEXPR inline bool operator!() const noexcept { return !i; }
    Q_DECL_CONSTEXPR inline bool testFlag(Enum flag) const noexcept { return (i & Int(flag)) == Int(flag) && (Int(flag) != 0 || i == Int(flag) ); }
    Q_DECL_RELAXED_CONSTEXPR inline QFlags &setFlag(Enum flag, bool on = true) noexcept
    {
        return on ? (*this |= flag) : (*this &= ~Int(flag));
    }
private:
    Q_DECL_CONSTEXPR static inline Int initializer_list_helper(typename std::initializer_list<Enum>::const_iterator it,
                                                               typename std::initializer_list<Enum>::const_iterator end)
    noexcept
    {
        return (it == end ? Int(0) : (Int(*it) | initializer_list_helper(it + 1, end)));
    }
    Int i;
};
#ifndef Q_MOC_RUN
#define Q_DECLARE_FLAGS(Flags, Enum)\
typedef QFlags<Enum> Flags;
#endif
#define Q_DECLARE_INCOMPATIBLE_FLAGS(Flags) \
Q_DECL_CONSTEXPR inline QIncompatibleFlag operator|(Flags::enum_type f1, int f2) noexcept \
{ return QIncompatibleFlag(int(f1) | f2); }
#define Q_DECLARE_OPERATORS_FOR_FLAGS(Flags) \
Q_DECL_CONSTEXPR inline QFlags<Flags::enum_type> operator|(Flags::enum_type f1, Flags::enum_type f2) noexcept \
{ return QFlags<Flags::enum_type>(f1) | f2; } \
Q_DECL_CONSTEXPR inline QFlags<Flags::enum_type> operator|(Flags::enum_type f1, QFlags<Flags::enum_type> f2) noexcept \
{ return f2 | f1; } Q_DECLARE_INCOMPATIBLE_FLAGS(Flags)
#else /* Q_NO_TYPESAFE_FLAGS */
#ifndef Q_MOC_RUN
#define Q_DECLARE_FLAGS(Flags, Enum)\
typedef uint Flags;
#endif
#define Q_DECLARE_OPERATORS_FOR_FLAGS(Flags)
#endif /* Q_NO_TYPESAFE_FLAGS */
QT_END_NAMESPACE
#endif // QFLAGS_H

/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** BSD License Usage
** Alternatively, you may use this file under the terms of the BSD license
** as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/
#include <arpa/telnet.h>
#include <arpa/tftp.h>
//! [0]
ControllerWindow::ControllerWindow(QWidget *parent)
    : QWidget(parent)
{
    previewWindow = new PreviewWindow(this);
    createTypeGroupBox();
    createHintsGroupBox();
    quitButton = new QPushButton(tr("&Quit"));
    connect(quitButton, &QPushButton::clicked,
            qApp, &QApplication::quit);
    QHBoxLayout *bottomLayout = new QHBoxLayout;
    bottomLayout->addStretch();
    bottomLayout->addWidget(quitButton);
    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addWidget(typeGroupBox);
    mainLayout->addWidget(hintsGroupBox);
    mainLayout->addLayout(bottomLayout);
    setLayout(mainLayout);
    setWindowTitle(tr("Window Flags"));
    updatePreview();
}
//! [0]
//! [1]
void ControllerWindow::updatePreview()
{
    Qt::WindowFlags flags = 0;
    if (windowRadioButton->isChecked()) {
        flags = Qt::Window;
    } else if (dialogRadioButton->isChecked()) {
        flags = Qt::Dialog;
    } else if (sheetRadioButton->isChecked()) {
        flags = Qt::Sheet;
    } else if (drawerRadioButton->isChecked()) {
        flags = Qt::Drawer;
    } else if (popupRadioButton->isChecked()) {
        flags = Qt::Popup;
    } else if (toolRadioButton->isChecked()) {
        flags = Qt::Tool;
    } else if (toolTipRadioButton->isChecked()) {
        flags = Qt::ToolTip;
    } else if (splashScreenRadioButton->isChecked()) {
        flags = Qt::SplashScreen;
//! [1] //! [2]
    }
//! [2] //! [3]
    if (msWindowsFixedSizeDialogCheckBox->isChecked())
        flags |= Qt::MSWindowsFixedSizeDialogHint;
    if (x11BypassWindowManagerCheckBox->isChecked())
        flags |= Qt::X11BypassWindowManagerHint;
    if (framelessWindowCheckBox->isChecked())
        flags |= Qt::FramelessWindowHint;
    if (windowNoShadowCheckBox->isChecked())
        flags |= Qt::NoDropShadowWindowHint;
    if (windowTitleCheckBox->isChecked())
        flags |= Qt::WindowTitleHint;
    if (windowSystemMenuCheckBox->isChecked())
        flags |= Qt::WindowSystemMenuHint;
    if (windowMinimizeButtonCheckBox->isChecked())
        flags |= Qt::WindowMinimizeButtonHint;
    if (windowMaximizeButtonCheckBox->isChecked())
        flags |= Qt::WindowMaximizeButtonHint;
    if (windowCloseButtonCheckBox->isChecked())
        flags |= Qt::WindowCloseButtonHint;
    if (windowContextHelpButtonCheckBox->isChecked())
        flags |= Qt::WindowContextHelpButtonHint;
    if (windowShadeButtonCheckBox->isChecked())
        flags |= Qt::WindowShadeButtonHint;
    if (windowStaysOnTopCheckBox->isChecked())
        flags |= Qt::WindowStaysOnTopHint;
    if (windowStaysOnBottomCheckBox->isChecked())
        flags |= Qt::WindowStaysOnBottomHint;
    if (customizeWindowHintCheckBox->isChecked())
        flags |= Qt::CustomizeWindowHint;
    previewWindow->setWindowFlags(flags);
//! [3] //! [4]
    QPoint pos = previewWindow->pos();
    if (pos.x() < 0)
        pos.setX(0);
    if (pos.y() < 0)
        pos.setY(0);
    previewWindow->move(pos);
    previewWindow->show();
}
//! [4]
//! [5]
void ControllerWindow::createTypeGroupBox()
{
    typeGroupBox = new QGroupBox(tr("Type"));
    windowRadioButton = createRadioButton(tr("Window"));
    dialogRadioButton = createRadioButton(tr("Dialog"));
    sheetRadioButton = createRadioButton(tr("Sheet"));
    drawerRadioButton = createRadioButton(tr("Drawer"));
    popupRadioButton = createRadioButton(tr("Popup"));
    toolRadioButton = createRadioButton(tr("Tool"));
    toolTipRadioButton = createRadioButton(tr("Tooltip"));
    splashScreenRadioButton = createRadioButton(tr("Splash screen"));
    windowRadioButton->setChecked(true);
    QGridLayout *layout = new QGridLayout;
    layout->addWidget(windowRadioButton, 0, 0);
    layout->addWidget(dialogRadioButton, 1, 0);
    layout->addWidget(sheetRadioButton, 2, 0);
    layout->addWidget(drawerRadioButton, 3, 0);
    layout->addWidget(popupRadioButton, 0, 1);
    layout->addWidget(toolRadioButton, 1, 1);
    layout->addWidget(toolTipRadioButton, 2, 1);
    layout->addWidget(splashScreenRadioButton, 3, 1);
    typeGroupBox->setLayout(layout);
}
//! [5]
//! [6]
void ControllerWindow::createHintsGroupBox()
{
    hintsGroupBox = new QGroupBox(tr("Hints"));
    msWindowsFixedSizeDialogCheckBox =
            createCheckBox(tr("MS Windows fixed size dialog"));
    x11BypassWindowManagerCheckBox =
            createCheckBox(tr("X11 bypass window manager"));
    framelessWindowCheckBox = createCheckBox(tr("Frameless window"));
    windowNoShadowCheckBox = createCheckBox(tr("No drop shadow"));
    windowTitleCheckBox = createCheckBox(tr("Window title"));
    windowSystemMenuCheckBox = createCheckBox(tr("Window system menu"));
    windowMinimizeButtonCheckBox = createCheckBox(tr("Window minimize button"));
    windowMaximizeButtonCheckBox = createCheckBox(tr("Window maximize button"));
    windowCloseButtonCheckBox = createCheckBox(tr("Window close button"));
    windowContextHelpButtonCheckBox =
            createCheckBox(tr("Window context help button"));
    windowShadeButtonCheckBox = createCheckBox(tr("Window shade button"));
    windowStaysOnTopCheckBox = createCheckBox(tr("Window stays on top"));
    windowStaysOnBottomCheckBox = createCheckBox(tr("Window stays on bottom"));
    customizeWindowHintCheckBox= createCheckBox(tr("Customize window"));
    QGridLayout *layout = new QGridLayout;
    layout->addWidget(msWindowsFixedSizeDialogCheckBox, 0, 0);
    layout->addWidget(x11BypassWindowManagerCheckBox, 1, 0);
    layout->addWidget(framelessWindowCheckBox, 2, 0);
    layout->addWidget(windowNoShadowCheckBox, 3, 0);
    layout->addWidget(windowTitleCheckBox, 4, 0);
    layout->addWidget(windowSystemMenuCheckBox, 5, 0);
    layout->addWidget(customizeWindowHintCheckBox, 6, 0);
    layout->addWidget(windowMinimizeButtonCheckBox, 0, 1);
    layout->addWidget(windowMaximizeButtonCheckBox, 1, 1);
    layout->addWidget(windowCloseButtonCheckBox, 2, 1);
    layout->addWidget(windowContextHelpButtonCheckBox, 3, 1);
    layout->addWidget(windowShadeButtonCheckBox, 4, 1);
    layout->addWidget(windowStaysOnTopCheckBox, 5, 1);
    layout->addWidget(windowStaysOnBottomCheckBox, 6, 1);
    hintsGroupBox->setLayout(layout);
}
//! [6]
//! [7]
QCheckBox *ControllerWindow::createCheckBox(const QString &text)
{
    QCheckBox *checkBox = new QCheckBox(text);
    connect(checkBox, &QCheckBox::clicked,
            this, &ControllerWindow::updatePreview);
    return checkBox;
}
//! [7]
//! [8]
QRadioButton *ControllerWindow::createRadioButton(const QString &text)
{
    QRadioButton *button = new QRadioButton(text);
    connect(button, &QRadioButton::clicked,
            this, &ControllerWindow::updatePreview);
    return button;
}
//! [8]
#endif /* i386 */