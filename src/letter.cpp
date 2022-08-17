#include <QtCore/QChar>
#include <QtCore/QString>

#include <QtWidgets/QWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSizePolicy>

#include <QtGui/QPixmap>

#include "letter.hpp"


FunnyLetter::FunnyLetter(QWidget *parent)
: QLabel(parent)
{
    setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    setScaledContents(true);
}

FunnyLetter::FunnyLetter(const QChar &letter, QWidget *parent)
: FunnyLetter(parent)
{
    m_pixmap = QPixmap(
        QString("letters/") + letter.toLower() + QString(".png")
    );
    setPixmap(m_pixmap);
}

FunnyLetter::~FunnyLetter()
{
}
