#ifndef APP_HPP_INCLUDED_
#define APP_HPP_INCLUDED_


#include <QtCore/QObject>

#include <QtWidgets/QApplication>

#include "mainwindow.hpp"


class Application : public QApplication
{
  Q_OBJECT

  public:
    Application(int argc, char *argv[]);

    ~Application();

  private:
    MainWindow *mainWindow;
};


#endif  // APP_HPP_INCLUDED_ // 
