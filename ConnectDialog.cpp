#include "ConnectDialog.h"
#include "ui_ConnectDialog.h"
#include "FtpService.h"

ConnectDialog::ConnectDialog(QWidget *parent, FtpService * ftpService) :
    QDialog(parent),
    ui(new Ui::ConnectDialog)
{
    ui->setupUi(this);
    this->ftpService = ftpService;
}

ConnectDialog::~ConnectDialog()
{
    delete ui;
}
