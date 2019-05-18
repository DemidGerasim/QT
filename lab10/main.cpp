//https://www.openssl.org/docs/man1.1.0/man3/EVP_EncryptInit.html - чистый СИ
//https://wiki.openssl.org/index.php/Libcrypto_API
//https://www.cryptocom.ru/docs/CryptoPack_2.1/libcrypto.pdf

#include <QCoreApplication>

#include <string.h>
#include <stdio.h> // Компилятор MinGW, не MSVC. Первый роднее Qt, второй - Visual Studio.
#include <unistd.h>
#include <openssl/evp.h>

//#define BUFSIZE 1024 // Почти произвольная "порция" данных для шифрования (это не элементарный блок для шифрования),не может превышать EVP_MAX_BLOCK_LENGTH.

/* General encryption and decryption function example using FILE I/O and AES128 with a 128-bit key. */

int do_crypt(FILE *in, FILE *out, int do_encrypt){
    /* Allow enough space in output buffer for additional block */
    unsigned char inbuf[1024], outbuf[1024]; // EVP_MAX_BLOCK_LENGTH?
    int inlen, outlen;

    /* Bogus key and IV: we'd normally set these from another source. */
    unsigned char key[] = "0123456789abcdeF0123456789abcdeF"; //16x8 = 128 (бит)
    unsigned char iv[] = "1234567887654321"; //случайное число (по длине ключа)

    EVP_CIPHER_CTX *ctx; // структура для указания алгоритма шифрования и его параметров
    ctx = EVP_CIPHER_CTX_new();

    /* Don't set key or IV right away; we want to check lengths */
    EVP_CipherInit_ex(ctx, EVP_aes_256_cbc(), NULL, NULL, NULL, do_encrypt);
    OPENSSL_assert(EVP_CIPHER_CTX_key_length(ctx) == 32);
    OPENSSL_assert(EVP_CIPHER_CTX_iv_length(ctx) == 16);
    /* Now we can set key and IV */
    EVP_CipherInit_ex(ctx,  NULL, NULL, key, iv, do_encrypt);

    for(;;){
        inlen = fread(inbuf, 1, 1024, in); // 1024 байта по байту из in в inbuf
        if (inlen <= 0) break;
        if(!EVP_CipherUpdate(ctx, outbuf, &outlen, inbuf, inlen)){ // шифрование или дешифрование (зависит от do_encrypt)
            /* Error */
            EVP_CIPHER_CTX_free(ctx);
            return 0;
        }
        fwrite(outbuf, 1, outlen, out);
    }

//    if(!EVP_CipherFinal_ex(ctx, outbuf, &outlen))
//    {
//        // Возвращает результат шифрования/дешифрования последнего неполного блока, если принудительно оключен режим финализации
//        /* Error */
//        EVP_CIPHER_CTX_free(ctx);
//        return 0;
//    }
//    fwrite(outbuf, 1, outlen, out);

    EVP_CIPHER_CTX_free(ctx); // удаление ctx
    return 1;
}

int main(int argc, char *argv[]){
    QCoreApplication a(argc, argv);

    //############

    //setlocale(LC_ALL, "Russian");

    //Пути пишите по-своему!

//        FILE *encode_file = fopen("D:/Study/ProgrammingLanguages/QT_181_352_Gerasimenko/GUI/lab10/t3.txt", "r");
//        FILE *decode_file = fopen("D:/Study/ProgrammingLanguages/QT_181_352_Gerasimenko/GUI/lab10/t2.txt", "w+");
//        do_crypt(encode_file, decode_file, 1); // 0 - decrypt, 1 - encrypt

    FILE *encode_file = fopen("D:/Study/ProgrammingLanguages/QT_181_352_Gerasimenko/GUI/lab10/t2.txt", "r");
    FILE *decode_file = fopen("D:/Study/ProgrammingLanguages/QT_181_352_Gerasimenko/GUI/lab10/t4.txt", "w+");
    do_crypt(encode_file, decode_file, 0); // 0 - decrypt, 1 - encrypt

    //############

    return a.exec();
}









//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif
//#include <iostream>
//#include <openssl/conf.h> // функции, структуры и константы настройки OpenSSL
//#include <openssl/conf.h>
//#include <openssl/evp.h> // сами криптогрфические функции https://wiki.openssl.org/index.php/EVP
//#include <openssl/err.h> // коды внутренних ошибок OpenSSL и их расшифровка
//#include <openssl/aes.h>
//#include <fstream>
//#include <string>
//#include <cstring>

//#pragma comment (lib, "ws2_32.LIB")
//#pragma comment (lib, "gdi32.LIB")
//#pragma comment (lib, "advapi32.LIB")
//#pragma comment (lib, "crypt32")
//#pragma comment (lib, "user32")
//#pragma comment (lib, "wldap32")

////#define BUFLEN 256
//// библиотеки OpenSSL (openssl.org) подключаются неявно динамически (см. конспект лаб. по библиотекам)

//using namespace std;

//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	// работа с криптофункциями OpenSSL:
//	// 1) создание объекта с настройками
//	// 2) собственно, шифрование
//	// 3) финализация
//	// 4) и вывод зашифрованных данных

//	// как правило, в литературе, структуры используются для хранения только данных
//	// ни слова о методах и конструкторах/деструкторах
//	struct name_of_my_struct // сродни классу
//	{
//		name_of_my_struct()
//		{

//		}

//		int a;
//		double b;
//		int fnc1()
//		{
//			return a;
//		}
//	};

//	unsigned char plaintext[256];
//	int plaintext_len;// = fread(plaintext, 1, BUFLEN, in); // длина текста
//	unsigned char *key = (unsigned char *)"0123456789"; // пароль (ключ)
//	unsigned char *iv = (unsigned char *)"0123456789012345"; // инициализирующий вектор, рандомайзер
//	unsigned char cryptedtext[256]; // зашифрованный результат
//	unsigned char decryptedtext[256]; // расшифрованный результат

//	// 1. Создаётся указатель на несуществующую структуру
//	// структура - тип данных в C++, близка к КЛАССУ, различия минимальны
//	EVP_CIPHER_CTX *ctx; // structure

//	// 2. Для указателя создаётся пустая структура настроек (метод, ключ, вектор инициализации и т.д.)
//	ctx = EVP_CIPHER_CTX_new(); // создание структуры с настройками метода

//	// 3. Структура EVP_CIPHER_CTX заполняется настройками
//	EVP_EncryptInit_ex(ctx, // ссылка на объект/структуру, куда заносятся параметры
//		EVP_aes_256_cbc(), // ссылка на шифрующее ядро AES 256 (функцию с алгоритмом)
//		NULL,
//		key, // ключ/пароль/секрет
//		iv); // рандомайзер (случайный начальный вектор)

//	unsigned char plaintext2[1000];
//	int len;
//	FILE *t1, *t2;
//	t1 = fopen("t3.txt", "rb");
//	t2 = fopen("t2.txt", "wb");

//	for (;;)
//	{
//		// 4. САМ ПРОЦЕСС ШИФРОВАНИЯ - ФУКНЦИЯ EVP_EncryptUpdate
//		plaintext_len = fread(plaintext, 1, 256, t1);

//		if (plaintext_len <= 0) break;
//		if (!EVP_EncryptUpdate(ctx, // объект с настройками
//			cryptedtext, // входной параметр: ссылка, куда помещать зашифрованные данные
//			&len, // выходной параметр: длина полученного шифра
//			plaintext, // входной параметр: что шифровать
//			plaintext_len)) return 0; // входной параметр : длина входных данных

//		if (plaintext_len == 256)
//		{
//			fwrite(cryptedtext, 1, len, t2);
//			for (int i = 0; i < len; i++)
//			{
//				cout << hex << cryptedtext[i];
//				//if ((i + 1) % 80 == 0) cout « endl;
//			}
//		}

//	}
//	int cryptedtext_len = len;


//	// 5. Финализация процесса шифрования
//	// необходима, если последний блок заполнен данными не полностью
//	EVP_EncryptFinal_ex(ctx, cryptedtext + len, &len);
//	cryptedtext_len += len;
//	fwrite(cryptedtext, 1, cryptedtext_len, t2);

//	for (int i = 0; i < cryptedtext_len; i++)
//	{
//		cout << hex << cryptedtext[i];
//		if ((i + 1) % 80 == 0) cout << endl;
//	}
//	cout << endl;
//	cout << "----------— " << endl;

//	// 6. Удаление структуры
//	EVP_CIPHER_CTX_free(ctx);
//	fclose(t1);
//	fclose(t2);

//	// РАСШИФРОВКА

//	// 1.
//	ctx = EVP_CIPHER_CTX_new(); // создание структуры с настройками метода

//	// 2.
//	EVP_DecryptInit_ex(ctx, EVP_aes_256_cbc(), NULL, key, iv); // инициализация методом AES, ключом и вектором

//	// 3.
//	FILE *t3;
//	t3 = fopen("t2.txt", "rb");

//	for (;;)
//	{
//		cryptedtext_len = fread(cryptedtext, 1, 256, t3);
//		if (cryptedtext_len <= 0) break;
//		if (!EVP_DecryptUpdate(ctx, decryptedtext, &len, cryptedtext, cryptedtext_len)) return 0; // входной параметр : длина входных данных

//			if (cryptedtext_len == 256)
//			{

//				for (int i = 0; i < len; i++)
//				{
//					cout << hex << decryptedtext[i];
//					//if ((i + 1) % 80 == 0) cout « endl;
//				}
//			}

//	}
//	//EVP_DecryptUpdate(ctx, decryptedtext, &len, cryptedtext, cryptedtext_len); // СОБСТВЕННО, ШИФРОВАНИЕ

//	// 4.
//	int decrypted_len = len;
//	EVP_DecryptFinal_ex(ctx, decryptedtext + len, &len);
//	// 5.
//	decrypted_len += len;
//	for (int i = 0; i < decrypted_len; i++)
//	{
//		cout << hex << decryptedtext[i];
//		//if ((i + 1) % 80 == 0) cout « endl;
//	}
//	cout << endl;
//	cout << "----------— " << endl;

//	EVP_CIPHER_CTX_free(ctx);
//	fclose(t3);

//	// —- шифрование файла
//	// производится точно так же, но порциями, в цикле
//	// в цикле
//	/*
//	1) открытие файлов и настройка параметров OpenSSL
//	2) считывание первого блока
//	3) while(считанный_фрагмент > 0)
//	{
//	4) шифрование считанного
//	5) запись зашифрованного массива в файл
//	6) считывание следующего фрагмента
//	}
//	7) применение финализирующей фукнции
//	8) запись финализирующего блока в файл
//	9) закрытие файлов
//	*/
//	getchar();
//	return 0;
//}
