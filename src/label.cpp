#include <QtCore/QChar>
#include <QtCore/QString>

#include <QtWidgets/QWidget>
#include <QtWidgets/QHBoxLayout>

#include <QtGui/QResizeEvent>

#include "label.hpp"
#include "letter.hpp"


FunnyLabel::FunnyLabel(QWidget *parent)
: QWidget(parent)
{
    setLayout(new QHBoxLayout(this));
}

FunnyLabel::FunnyLabel(
    const QString &text, QWidget *parent
) : FunnyLabel(parent)
{
    setText(text);
}

FunnyLabel::~FunnyLabel()
{
}


void FunnyLabel::setText(const QString &text)
{
    m_text = text;

    for (FunnyLetter *letter : m_letters) {
        layout()->removeWidget(letter);
        delete letter;
    }
    m_letters.clear();

    for (QChar ch : text) {
        if (ch.isLetter() || ch == ' ') {
            FunnyLetter *letter = new FunnyLetter(ch, this);

            layout()->addWidget(letter);
            m_letters.append(letter);
        }
    }
}

const QString &FunnyLabel::text() const
{
    return m_text;
}
