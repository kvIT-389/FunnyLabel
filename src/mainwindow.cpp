#include <QtCore/Qt>
#include <QtCore/QObject>
#include <QtCore/QString>
#include <QtCore/QPoint>
#include <QtCore/QSize>

#include <QtWidgets/QWidget>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

#include <QtGui/QFont>

#include "mainwindow.hpp"
#include "label.hpp"


MainWindow::MainWindow()
{
    move(QPoint(300, 200));
    resize(QSize(780, 480));

    setWindowTitle("Funny Letters");

    initializeWidgets();
    composeWidgets();
    connectWidgets();
}

MainWindow::~MainWindow()
{
}


void MainWindow::initializeWidgets()
{
    QWidget *central_widget = new QWidget(this);
    setCentralWidget(central_widget);

    m_funnyLabel = new FunnyLabel(QString(), central_widget);

    m_inputLineEdit = new QLineEdit(central_widget);

    m_inputLineEdit->setAlignment(Qt::AlignCenter);
    m_inputLineEdit->setFont(QFont("Calibri", 12, 400));
}

void MainWindow::composeWidgets()
{
    QVBoxLayout *root_layout = new QVBoxLayout(centralWidget());

    root_layout->addWidget(m_funnyLabel);
    root_layout->addWidget(m_inputLineEdit);
}

void MainWindow::connectWidgets()
{
    QObject::connect(m_inputLineEdit, QLineEdit::textChanged,
                     m_funnyLabel, FunnyLabel::setText);
}
