#include <QtWidgets/QApplication>

#include <QtGui/QIcon>

#include "application.hpp"
#include "mainwindow.hpp"


Application::Application(int argc, char *argv[])
: QApplication(argc, argv)
{
    setWindowIcon(QIcon("icons/qt.ico"));

    mainWindow = new MainWindow();
    mainWindow->show();
}

Application::~Application()
{
    delete mainWindow;
}
