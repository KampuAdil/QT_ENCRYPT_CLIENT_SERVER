
#ifndef AES_H
#define AES_H

#include <QCoreApplication>
#include <QDebug>
#include <QString>

using namespace CryptoPP;

class AES256Cipher {
public:
    AES256Cipher(const byte key[CryptoPP::AES::DEFAULT_KEYLENGTH]) : key(key) {}
    QString encrypt(const QString &plaintext);
    QString decrypt(const QString &ciphertext);

private:
    const byte *key;
};

#endif // AES_H
