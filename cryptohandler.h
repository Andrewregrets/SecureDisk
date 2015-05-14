#ifndef CRYPTOHANDLER_H
#define CRYPTOHANDLER_H

#include <QObject>

class CryptoHandler : public QObject
{
    Q_OBJECT
public:
    explicit CryptoHandler(QObject *parent = 0);
    static int encrypt(QString password, char* data, int size);
    static int decrypt(QString password, char* data, int size);

signals:

public slots:

};

#endif // CRYPTOHANDLER_H
