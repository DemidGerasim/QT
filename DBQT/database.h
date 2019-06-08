#ifndef DATABASE_H
#define DATABASE_H

#endif // DATABASE_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <string>
#include <vector>


using namespace std;


struct Data{ // труктура базы данных
    int id;
    string tel;
    string name;
    string surname;
    string otch;
    string login;
    string password;
    string status;
};


class DataBase{
protected:
    fstream streamF;
   string _tableName;
private:
    vector<Data> _db; // вектор в каотором находится текущее состояние бд
    int id = 1;

    void fileToVector(); // парсинг бд



    public:
        DataBase();
        DataBase(string tableName);

        void add(Data temp_data); // добавление в базу данных

        bool read();
        bool write();
        bool skip(); // данная функция перезаписывает файл
        bool openFile();
        bool closeFile();
        bool download(); // загрузка БД из файла
        bool upload(); // загрузка БД в файл

        string data2string(Data temp); // строит вид в котором будет записанна информация

        //************************************ замена данных по определённому ID ************************************
        void changeTel(int id, Data temp_data);
        void changeName(int id, Data temp_data);
        void changeSurname(int id, Data temp_data);
        void changeOtch(int id, Data temp_data);
        void changeLogin(int id, Data temp_data);
        void changePass(int id, Data temp_data);
        //***********************************************************************************************************

        void del(int temp_id); // удаление по id
        void push_back(Data item); // добавление
        string result; // результат поиска + сам вид в котором будет выводиться информация
        string searchText(string k, string v); // поиск и вывод  string result;
        DataBase search(string k, string result); // поиск строчных данных
        DataBase search(string k, int v); // поиск int-х данных
        bool checkLogAndPassUser(string log, string pass); // проверка на стутус, является ли авторизатор простым пользователем?
        bool checkLogAndPassAdmin(string log, string pass); // проверка на стутус, является ли авторизатор администатором?
        bool checkStatus(); // проверка статуса

    };


struct Prog
{
    int id;
    string name;
    string surname;
    string otch;
    string kt1;
    string kt2;
    string kt3;
    string kt4;
};


class Progress : public DataBase
{
private:
    vector<Prog> _db;// вектор в каотором находится текущее состояние бд
    int id = 1;

    void fileToVector(); // парсинг бд

public:
    Progress();
    Progress(string tableName);

    void add(Prog temp_data);// добавление в базу данных

            bool read();
            bool write();
            bool skip(); // данная функция перезаписывает файл
            bool download(); // загрузка БД из файла
            bool upload(); // загрузка БД в файл

     //замена данных по определённому ID
    void changeKT1(int id, Prog temp_data);
    void changeKT2(int id, Prog temp_data);
    void changeKT3(int id, Prog temp_data);
    void changeKT4(int id, Prog temp_data);
    void changeKT5(int id, Prog temp_data);


    string data2string(Prog temp);

    void del(int temp_id);// удаление по id
    void push_back(Prog item);// добавление

    string searchP; // результат поиска + сам вид в котором будет выводиться информация
    string searchProgressText(string k, string v); // поиск и вывод  string result;
    Progress searchProgress(string k, string result); // поиск string-х данных
    Progress searchProgress(string k, int v); // поиск int-х данных
};
