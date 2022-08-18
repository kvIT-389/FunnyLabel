#ifndef MAINWINDOW_HPP_INCLUDED_
#define MAINWINDOW_HPP_INCLUDED_


#include <QtCore/QObject>

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QLineEdit>

#include "label.hpp"


class MainWindow : public QMainWindow
{
  Q_OBJECT

  public:
    MainWindow();

    ~MainWindow();

  private:
    FunnyLabel *m_funnyLabel;
    QLineEdit *m_inputLineEdit;

    void initializeWidgets();
    void composeWidgets();
    void connectWidgets();
};


#endif  // MAINWINDOW_HPP_INCLUDED_ // 
