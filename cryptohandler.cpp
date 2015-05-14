#include "cryptohandler.h"

//#include "matrixssl/matrixsslApi.h"

const char privateKey[] = "";

const char publicKey[] = "";

CryptoHandler::CryptoHandler(QObject *parent) :
    QObject(parent)
{
}

int CryptoHandler::encrypt(QString password, char* data, int size)
{
    return -1;
}

int CryptoHandler::decrypt(QString password, char* data, int size)
{
    return -1;
}
