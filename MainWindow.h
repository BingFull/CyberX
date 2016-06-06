#ifndef MAINWINDOWH
#define MAINWINDOWH

#include "stable.h"
#include "FtpService.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    FtpService ftpService;
};

#endif // MAINWINDOWH
