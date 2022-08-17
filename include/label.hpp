#ifndef LABEL_HPP_INCLUDED_
#define LABEL_HPP_INCLUDED_


#include <QtCore/QObject>
#include <QtCore/QString>
#include <QtCore/QList>

#include <QtWidgets/QWidget>

#include <QtGui/QResizeEvent>

#include "letter.hpp"


class FunnyLabel : public QWidget
{
  Q_OBJECT

  public:
    FunnyLabel(QWidget *parent = nullptr);
    FunnyLabel(const QString &text,
               QWidget *parent = nullptr);

    ~FunnyLabel();

    const QString &text() const;

  public slots:
    void setText(const QString &text);

  private:
    QString m_text;

    QList<FunnyLetter *> m_letters;
};


#endif  // LABEL_HPP_INCLUDED_ // 
