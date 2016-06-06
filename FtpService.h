#ifndef FTPSERVICE_H
#define FTPSERVICE_H

#include "stable.h"

class FtpService : public QObject
{
public:
    enum Command{
        None,
        SetTransferMode,
        ConnectToHost,
        Mkdir,
        Login,
        List,
        Get,
        Put,
        Remove,
        Rename,
        Rmdir
    };
    enum State{
        Unconnected,
        HostLookup,
        Connecting,
        Connected,
        LoggedIn,
        Closing
    };

    int connectToHost(const QString & host, quint16 port = 21);
    inline Command currentCommand() const { }
    inline QIODevice * currentDevice() const { }
    inline int currentId() const { }
    inline QString errorString() const { }
    int get(const QString & file, QIODevice * dev = nullptr);
    inline bool hasPendingCommands() const {  }
    int list(const QString & dir = QString());
    int login(const QString & user = QString(), const QString & password = QString());
    int mkdir(const QString & dir);
    int put(QIODevice * dev, const QString & file);
    int remove(const QString & file);
    int rename(const QString & oldName, const QString & newName);
    int rmdir(const QString & dir);
    inline State state() {}

    FtpService();
};

#endif // FTPSERVICE_H
