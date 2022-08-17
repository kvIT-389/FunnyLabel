#ifndef LETTER_HPP_INCLUDED_
#define LETTER_HPP_INCLUDED_


#include <QtCore/QObject>
#include <QtCore/QChar>

#include <QtWidgets/QWidget>
#include <QtWidgets/QLabel>

#include <QtGui/QPixmap>


class FunnyLetter : public QLabel
{
  Q_OBJECT

  public:
    FunnyLetter(QWidget *parent = nullptr);
    FunnyLetter(const QChar &letter,
                QWidget *parent = nullptr);

    ~FunnyLetter();

  private:
    QPixmap m_pixmap;
};


#endif  // LETTER_HPP_INCLUDED_ // 
