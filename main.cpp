#include "stable.h"
#include "ConnectDialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ConnectDialog c;
    c.show();

    return a.exec();
}
