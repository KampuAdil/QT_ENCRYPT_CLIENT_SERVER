#include "aes.h"

QString AES256Cipher::encrypt(const QString &plaintext) {
    QString ciphertext;

    try {
        CBC_Mode<AES>::Encryption encryption;
        encryption.SetKeyWithIV(key, CryptoPP::AES::DEFAULT_KEYLENGTH, key);

        StringSource(plaintext.toStdString(), true,
                     new StreamTransformationFilter(encryption, new StringSink(ciphertext)));
    } catch (const CryptoPP::Exception &e) {
        qDebug() << "Encryption error: " << e.what();
    }

    return ciphertext;
}

QString AES256Cipher::decrypt(const QString &ciphertext) {
    QString decryptedText;

    try {
        CBC_Mode<AES>::Decryption decryption;
        decryption.SetKeyWithIV(key, CryptoPP::AES::DEFAULT_KEYLENGTH, key);

        StringSource(ciphertext.toStdString(), true,
                     new StreamTransformationFilter(decryption, new StringSink(decryptedText)));
    } catch (const CryptoPP::Exception &e) {
        qDebug() << "Decryption error: " << e.what();
    }

    return decryptedText;
}
