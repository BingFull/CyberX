#ifndef CONNECTDIALOG_H
#define CONNECTDIALOG_H

#include <QDialog>
#include "FtpService.h"

namespace Ui {
class ConnectDialog;
}

class ConnectDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ConnectDialog(QWidget *parent = 0, FtpService * ftpService = nullptr);
    ~ConnectDialog();

private:
    Ui::ConnectDialog *ui;
    FtpService * ftpService;
};

#endif // CONNECTDIALOG_H
