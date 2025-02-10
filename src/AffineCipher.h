// src/AffineCipher.h
#ifndef AFFINE_CIPHER_H
#define AFFINE_CIPHER_H

#include <Arduino.h>

class AffineCipher {
  private:
    int m;
    int a;
    int b;
    int a_inv;

    // Функция для вычисления наибольшего общего делителя
    int gcd(int a, int b);

    // Функция для нахождения обратного элемента по модулю
    int modInverse(int a, int m);

  public:
    // Конструктор
    AffineCipher(int m_val, int a_val, int b_val);

    // Функция для шифрования цифры
    int encrypt(int x);

    // Функция для дешифрования цифры
    int decrypt(int y);

    // Функция для шифрования строки цифр
    String encryptString(String number);

    // Функция для дешифрования строки цифр
    String decryptString(String number);
};

#endif