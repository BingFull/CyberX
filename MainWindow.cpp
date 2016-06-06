#include "MainWindow.h"
#include "ConnectDialog.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ConnectDialog * dialog = new ConnectDialog(this, &ftpService);
    dialog->show();
    connect(dialog, &QDialog::accepted,
            this, &QMainWindow::show);
    connect(dialog, &QDialog::rejected,
            qApp, &QApplication::quit);
    connect(dialog, &QDialog::finished,
            dialog, &QObject::deleteLater);
}

MainWindow::~MainWindow()
{
    delete ui;
}
