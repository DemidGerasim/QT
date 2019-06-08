#include "database.h"



void DataBase::fileToVector() // парсинг структуры файла
{
    openFile();

    if(!streamF)
    {
        exit(1);
    }

    while(!streamF.eof()){
        string str, token;

        getline(streamF, str);
        cout << str << endl << endl;


            Data item; //запись таблицы

            int k = 0;
            istringstream streamS(str);

            int id = 1;

            while(getline(streamS, token, ':')){ // проходит по файлу столько раз сколько строк в файле; все элементы структуры разделены :
                cout << token << endl; //токен
                if(k == 0) item.id = stoi(token);
                if(k == 1) item.tel = token;
                if(k == 2) item.name = token;
                if(k == 3) item.surname = token;
                if(k == 4) item.otch = token;
                if(k == 5) item.login = token;
                if(k == 6) item.password = token;
                if(k == 7) item.status = token;
                k++;

            }

            id++; // следуйщий id


            cout << endl;

            _db.push_back(item); // запись текущей структуры в вектор _db
    }
}


    DataBase::DataBase(){
        id = 1; // id = 1 по умолчанию
    }

    DataBase::DataBase(string tableName) // какой файл использовать?
    {
        _tableName = tableName; // операция сравнения имени файла
        fileToVector(); // парсинг структуры файла
    }

    void DataBase::add(Data temp_data) // добавление
    {
        _db.push_back(temp_data); // добавление
    }

    bool DataBase::read() //считывает всю БД из файла
        {
            openFile();
            download();
            closeFile();
            return true;
        }



    bool DataBase::write() //запись всей БД в файл
        {
            openFile();
            upload();
            closeFile();
            return true;
        }
    bool DataBase::skip(){
            streamF.open("D:\\Study\\ProgrammingLanguages\\QT_181_352_Gerasimenko\\GUI\\DBQT\\" + _tableName +".txt", ios::out | ios::trunc);
            upload();
            closeFile();
            return true;
        }

    bool DataBase::openFile()
    {
        streamF.open("D:\\Study\\ProgrammingLanguages\\QT_181_352_Gerasimenko\\GUI\\DBQT\\" + _tableName +".txt", ios::in | ios::out);// указываем путь к файлу
        if (streamF.is_open())
        {
            return true;
        }
        else {
            return false;
        }

    }

    bool DataBase::closeFile()
    {

            streamF.close();
        return true;
    }

    bool DataBase::download()
        {
            Data data_to_add;

            while (!streamF.eof())
            {
              add(data_to_add); // загрузка данных из фала
            }
            return true;
        }


    bool DataBase::upload(){  //  загрузка данных в фал
        Data temp_data;
        string temp_str;

        for (unsigned long long int i = 0; i < _db.size(); i++) {

           temp_data = _db[i];
            temp_str = data2string(temp_data); // проверка в какой форме записывать
           streamF << temp_str; //  загрузка данных в фал
        }
        return true;
    }

    string DataBase::data2string(Data temp){ // проверка в какой форме хранить данные
        string temp_str;

        stringstream ss;
        ss << id;
        string ID = ss.str();
        if(temp.name.empty() && temp.surname.empty() && temp.otch.empty()){
            return "";
        }else{ // преобразование элемент : элемент : элемент
            temp_str.append(ID);
            temp_str.append(":");
            temp_str.append(temp.tel);
            temp_str.append(":");
            temp_str.append(temp.name);
            temp_str.append(":");
            temp_str.append(temp.surname);
            temp_str.append(":");
            temp_str.append(temp.otch);
            temp_str.append(":");
            temp_str.append(temp.login);
            temp_str.append(":");
            temp_str.append(temp.password);
            temp_str.append(":");
            temp_str.append(temp.status);
            temp_str.append("\n");
        }

        temp.id = id++; // следующий id
        return temp_str;
    }



    void DataBase::del(int temp_id){ // удаление по id
        read();
        vector<Data> temp; // массив временных данных
        temp.resize(_db.size()); // временные данные будут изменяться
        search("id", temp_id); // поиска строки с введённым id
        for(unsigned long long int i = 0; i < _db.size(); i++){
            Data item = _db.at(i);
            if(item.id != temp_id){
                temp[i] = _db[i]; // если id не тот что ввели, то записывается старое значение
            } else {
                continue; // если id тот что ввели, то эту строку пропускает и не записывает
            }
        }

        for(unsigned long long int i = 0; i < _db.size(); i++){
            _db[i] = temp[i];  // запись уже исправленной информации
        }

        skip();

    }


    void DataBase::changeTel(int id, Data temp_data){
        read();
        vector<Data> temp;
        temp.resize(_db.size());

        unsigned long long int f = 1;

        search("id", id); // поиск id

        for (unsigned long long int i = 0; i < _db.size(); i++) {
            Data item = _db.at(i);
            if(item.id == id)
            {

                f = i; // если id cовпадает то выходи из цикла
                break;
            }
        }


         search("tel", temp_data.tel);  // поиск телефона


        for (unsigned long long int i = 0; i < _db.size(); i++)
         {
           if(temp_data.tel == ""){
                break;
           }
           if(i == f)
           {
                temp[i].tel = temp_data.tel; // запись введённого
           }
           else
           {
                temp[i].tel = _db[i].tel; // запись старой информации
           }
         }

         for (unsigned long long int i = 0; i < temp.size(); i++){
               _db[i].tel = temp[i].tel; // запись уже исправленной информации
         }

        skip();

    }

    void DataBase::changeName(int id, Data temp_data){
        read();
        vector<Data> temp;
        temp.resize(_db.size());

        unsigned long long int f = 1;

        search("id", id);

        for (unsigned long long int i = 0; i < _db.size(); i++) {
            Data item = _db.at(i);
            if(item.id == id)
            {

                f = i;// если id cовпадает то выходи из цикла
                break;
            }
        }

         search("name", temp_data.name);


        for (unsigned long long int i = 0; i < _db.size(); i++)
         {
           if(temp_data.name == ""){
                break;
           }
           if(i == f)
           {
                temp[i].name = temp_data.name;// запись введённого
           }
           else
           {
                temp[i].name = _db[i].name; // запись старой информации
           }
         }

         for (unsigned long long int i = 0; i < temp.size(); i++){
               _db[i].name = temp[i].name; // запись уже исправленной информации
         }

        skip();

    }

    void DataBase::changeSurname(int id, Data temp_data){
        read();
        vector<Data> temp;
        temp.resize(_db.size());

        unsigned long long int f = 1;

        search("id", id);

        for (unsigned long long int i = 0; i < _db.size(); i++) {
            Data item = _db.at(i);
            if(item.id == id)
            {

                f = i;// если id cовпадает то выходи из цикла
                break;
            }
        }

         search("surname", temp_data.surname);


        for (unsigned long long int i = 0; i < _db.size(); i++)
         {
           if(temp_data.surname == ""){
                break;
           }
           if(i == f)
           {
                temp[i].surname = temp_data.surname;// запись старой информации
           }
           else
           {
                temp[i].surname = _db[i].surname;// запись старой информации
           }
         }

         for (unsigned long long int i = 0; i < temp.size(); i++){
               _db[i].surname = temp[i].surname;// запись уже исправленной информации
         }

        skip();

    }

    void DataBase::changeOtch(int id, Data temp_data){
        read();
        vector<Data> temp;
        temp.resize(_db.size());

        unsigned long long int f = 1;

        search("id", id);

        for (unsigned long long int i = 0; i < _db.size(); i++) {
            Data item = _db.at(i);
            if(item.id == id)
            {

                f = i;// если id cовпадает то выходи из цикла
                break;
            }
        }

         search("otch", temp_data.otch);


        for (unsigned long long int i = 0; i < _db.size(); i++)
         {
           if(temp_data.otch == ""){
                break;
           }
           if(i == f)
           {
                temp[i].otch = temp_data.otch;// запись старой информации
           }
           else
           {
                temp[i].otch = _db[i].otch;// запись старой информации
           }
         }

         for (unsigned long long int i = 0; i < temp.size(); i++){
               _db[i].otch = temp[i].otch;// запись уже исправленной информации
         }

        skip();

    }

    void DataBase::changeLogin(int id, Data temp_data){
        read();
        vector<Data> temp;
        temp.resize(_db.size());

        unsigned long long int f = 1;

        search("id", id);

        for (unsigned long long int i = 0; i < _db.size(); i++) {
            Data item = _db.at(i);
            if(item.id == id)
            {

                f = i;// если id cовпадает то выходи из цикла
                break;
            }
        }

         search("log", temp_data.login);


        for (unsigned long long int i = 0; i < _db.size(); i++)
         {
           if(temp_data.login == ""){
                break;
           }
           if(i == f)
           {
                temp[i].login = temp_data.login;// запись старой информации
           }
           else
           {
                temp[i].login = _db[i].login;// запись старой информации
           }
         }

         for (unsigned long long int i = 0; i < temp.size(); i++){
               _db[i].login = temp[i].login;// запись уже исправленной информации
         }

        skip();

    }

    void DataBase::changePass(int id, Data temp_data){
        read();
        vector<Data> temp;
        temp.resize(_db.size());

        unsigned long long int f = 1;

        search("id", id);

        for (unsigned long long int i = 0; i < _db.size(); i++) {
            Data item = _db.at(i);
            if(item.id == id)
            {

                f = i;// если id cовпадает то выходи из цикла
                break;
            }
        }

         search("pass", temp_data.password);


        for (unsigned long long int i = 0; i < _db.size(); i++)
         {
           if(temp_data.password == ""){
                break;
           }
           if(i == f)
           {
                temp[i].password = temp_data.password;// запись старой информации
           }
           else
           {
                temp[i].password = _db[i].password;// запись старой информации
           }
         }

         for (unsigned long long int i = 0; i < temp.size(); i++){
               _db[i].password = temp[i].password;// запись уже исправленной информации
         }

        skip();

    }

    void DataBase::push_back(Data item){
        _db.push_back(item);
    }

    string DataBase::searchText(string k, string v)
    {

        for (unsigned int i = 0; i < _db.size(); i++)
        {
            Data item = _db.at(i);

            stringstream ss;
            ss << item.id;
            string ID = ss.str();

            if(k == "tel" && item.tel == v){
                _db.push_back(item);//  добавление данных
                // cтруктурирование данных которые будут выводиться в приложениии
               result = result + "ID: " + ID + ", Phone: " + item.tel + ", Name: " + item.name + ", Year: " +
                       item.surname + ", Address: " + item.otch + ", Login: " + item.login + ", Password:" + item.password + ", Status: " + item.status + ";\n";
            }

            if(k == "name" && item.name == v){
               _db.push_back(item);
               result = result + "ID: " + ID + ", Phone: " + item.tel + ", Name: " + item.name + ", Year: " +
                       item.surname + ", Address: " + item.otch + ", Login: " + item.login + ", Password:" + item.password + ", Status: " + item.status + ";\n";
            }

            if(k == "surname" && item.surname == v){
               _db.push_back(item);
               result = result + "ID: " + ID + ", Phone: " + item.tel + ", Name: " + item.name + ", Year: " +
                       item.surname + ", Address: " + item.otch + ", Login: " + item.login + ", Password:" + item.password + ", Status: " + item.status + ";\n";
            }

            if(k == "otch" && item.otch == v){
                _db.push_back(item);
                result = result + "ID: " + ID + ", Phone: " + item.tel + ", Name: " + item.name + ", Year: " +
                        item.surname + ", Address: " + item.otch + ", Login: " + item.login + ", Password:" + item.password + ", Status: " + item.status + ";\n";
            }

            if(item.tel.empty() && item.name.empty() && item.surname.empty() && item.otch.empty()){
                break;
            }




        }

          return result;

    }
        DataBase DataBase::search(string k, string result)
            {
                DataBase select;

                for (unsigned int i = 1; i < _db.size(); i++) // поиск информации по определённому слову - K
                {
                    Data item = _db.at(i);

                    if(k == "tel" && item.tel == result){ // поиск телефона
                        select.push_back(item);
                    }

                    if(k == "name" && item.name == result){ // поиск  имя
                       select.push_back(item);
                    }

                    if(k == "surname" && item.surname == result){// поиск  фамилии
                       select.push_back(item);
                    }

                    if(k == "otch" && item.otch == result){// поиск отчества
                        select.push_back(item);
                    }

                    if(k == "log" && item.login == result){// поиск логина
                        select.push_back(item);
                    }


                    if(k == "pass" && item.password == result){// поиск пороля
                        select.push_back(item);
                    }

                    if(k == "status" && item.status == result){// поиск  статуса
                        select.push_back(item);
                    }

                }


                return select;
            }




    DataBase DataBase::search(string k, int v){ //тип значения поля - int
        DataBase select;
        for (unsigned i = 0; i < _db.size(); i++){
            Data item = _db.at(i);

            if(k == "id" && item.id == v){ // поиск id
               select.push_back(item);
            }
        }
        return select;
    }


    bool DataBase::checkLogAndPassUser(string log, string pass){
        string status;
        openFile();
        search("log", log); // поиск введённого логина
        search("pass", pass);// поиск введённого пороля
        search("status", status); // поиск статуса
         for(unsigned int i = 0; i < _db.size(); i++)
         {
             Data item = _db.at(i);
             if(!(item.login.empty() && item.password.empty()))
             {
                     if(item.login == log && item.password == pass && item.status == "user") // если данные совпвдают то true и будет выполнен вход в пользовательское окно
                     {
                             return true;
                     }
                     else
                     {
                         id++;

                     }
             } else {

                 return false;

            }

         }

         return true;
    }

    bool DataBase::checkLogAndPassAdmin(string log, string pass){
       string status;
       openFile();
       search("log", log); // поиск введённого логина
       search("pass", pass);// поиск введённого пороля
       search("status", status); // поиск статуса
        for(unsigned int i = 0; i < _db.size(); i++)
        {
            Data item = _db.at(i);
            if(!(item.login.empty() && item.password.empty()))
            {
                if(item.login == log && item.password == pass && item.status == "admin")// если данные совпвдают то true и будет выполнен вход в учительское окно
                {

                        return true;

                }
                else
                {
                    id++;
                }

           } else {

                return false;

           }

        }

        return true;
    }

    bool DataBase::checkStatus(){
        string status;
        openFile();
        search("status", status);
        for(unsigned int i = 0; i < _db.size(); i++)
        {
            Data item = _db.at(i);
            if(item.status == "admin"){ // проверка статуса
                return true;
            }
        }
        return true;
    }


//в данном класе все тоже самое что и в предыдущем классе (DataBase)

    void Progress::fileToVector()
    {
        openFile();

        if(!streamF)
        {
            exit(1);
        }

        while(!streamF.eof()){//while(streamF){
            string str, token;

            getline(streamF, str); //строка
            cout << str << endl << endl;

            //if(typeid(T1) == typeid(Data)){ //+проверка формата строки и ее составляющих
                Prog item; //запись таблицы

                int k = 0;
                istringstream streamS(str);

                int id = 1;

                while(getline(streamS, token, ':')){
                    //cout << "#" << k << ": " << token << endl; //токен
                    cout << token << endl; //токен
                    if(k == 0) item.id = stoi(token);
                    if(k == 1) item.name = token;
                    if(k == 2) item.surname = token;
                    if(k == 3) item.otch = token;
                    if(k == 4) item.kt1 = token;
                    if(k == 5) item.kt2 = token;
                    if(k == 6) item.kt3 = token;
                    if(k == 7) item.kt4 = token;

                    k++;

                }

                id++;


                cout << endl;

                _db.push_back(item);

        }

    }


    Progress::Progress(){
        id = 1;
    }

    Progress::Progress(string tableName)
    {
        _tableName = tableName;
        fileToVector();
    }

    void Progress::add(Prog temp_data)
    {
        _db.push_back(temp_data);
    }

    bool Progress::read() //считывает всю БД из файла
        {
            openFile();
            download();
            closeFile();
            return true;
        }


    bool Progress::write() //запись всей БД в файл
        {
            openFile();
            upload();
            closeFile();
            return true;
        }

    bool Progress::skip(){
            streamF.open("D:\\Study\\ProgrammingLanguages\\QT_181_352_Gerasimenko\\GUI\\DBQT\\" + _tableName +".txt", ios::out | ios::trunc);
            upload();
            closeFile();
            return true;
        }

    bool Progress::download()
        {
            Prog data_to_add;

            while (!streamF.eof())
            {
              add(data_to_add);
            }
            return true;
        }


    bool Progress::upload(){
        Prog temp_data;
        string temp_str;

        for (unsigned long long int i = 0; i < _db.size(); i++) {

           temp_data = _db[i];
            temp_str = data2string(temp_data);
           streamF << temp_str;
        }
        return true;
    }

    string Progress::data2string(Prog temp){
        string temp_str;

        stringstream ss;
        ss << id;
        string ID = ss.str();
        if(temp.name.empty() && temp.surname.empty()){
            return "";
        }else{
            temp_str.append(ID);
            temp_str.append(":");
            temp_str.append(temp.name);
            temp_str.append(":");
            temp_str.append(temp.surname);
            temp_str.append(":");
            temp_str.append(temp.otch);
            temp_str.append(":");
            temp_str.append(temp.kt1);
            temp_str.append(":");
            temp_str.append(temp.kt2);
            temp_str.append(":");
            temp_str.append(temp.kt3);
            temp_str.append(":");
            temp_str.append(temp.kt4);
            temp_str.append("\n");

        }

        temp.id = id++;
        return temp_str;
    }

    void Progress::del(int temp_id){
        read();
        vector<Prog> temp;
        temp.resize(_db.size());
        searchProgress("id", temp_id);
        for(unsigned long long int i = 0; i < _db.size(); i++){
            Prog item = _db.at(i);
            if(item.id != temp_id){
                temp[i] = _db[i];
            } else {
                continue;
            }
        }

        for(unsigned long long int i = 0; i < _db.size(); i++){
            _db[i] = temp[i];
        }

        skip();

    }

    void Progress::changeKT1(int id, Prog temp_data){
            read();
            vector<Prog> temp;
            temp.resize(_db.size());

            unsigned long long int f = 1;

            searchProgress("id", id);

            for (unsigned long long int i = 0; i < _db.size(); i++) {
                Prog item = _db.at(i);
                if(item.id == id)
                {

                    f = i;
                    break;
                }
            }

             searchProgress("kt1", temp_data.kt1);

            for (unsigned long long int i = 0; i < _db.size(); i++)
             {
               if(temp_data.kt1 == ""){
                    break;
               }
               if(i == f)
               {
                    temp[i].kt1 = temp_data.kt1;
               }
               else
               {
                    temp[i].kt1 = _db[i].kt1;
               }
             }

             for (unsigned long long int i = 0; i < temp.size(); i++){
                   _db[i].kt1 = temp[i].kt1;
             }

            skip();
        }

    void Progress::changeKT2(int id, Prog temp_data){
        read();
        vector<Prog> temp;
        temp.resize(_db.size());

        unsigned long long int f = 1;

        searchProgress("id", id);

        for (unsigned long long int i = 0; i < _db.size(); i++) {
            Prog item = _db.at(i);
            if(item.id == id)
            {

                f = i;
                break;
            }
        }

         searchProgress("kt2", temp_data.kt2);
        for (unsigned long long int i = 0; i < _db.size(); i++)
         {
           if(temp_data.kt2 == ""){
                break;
           }
           if(i == f)
           {
                temp[i].kt2 = temp_data.kt2;
           }
           else
           {
                temp[i].kt2 = _db[i].kt2;
           }
         }

         for (unsigned long long int i = 0; i < temp.size(); i++){
               _db[i].kt2 = temp[i].kt2;
         }

        skip();
    }

    void Progress::changeKT3(int id, Prog temp_data){
        read();
        vector<Prog> temp;
        temp.resize(_db.size());

        unsigned long long int f = 1;

        searchProgress("id", id);

        for (unsigned long long int i = 0; i < _db.size(); i++) {
            Prog item = _db.at(i);
            if(item.id == id)
            {

                f = i;
                break;
            }
        }

         searchProgress("kt3", temp_data.kt3);
        for (unsigned long long int i = 0; i < _db.size(); i++)
         {
           if(temp_data.kt3 == ""){
                break;
           }
           if(i == f)
           {
                temp[i].kt3 = temp_data.kt3;
           }
           else
           {
                temp[i].kt3 = _db[i].kt3;
           }
         }

         for (unsigned long long int i = 0; i < temp.size(); i++){
               _db[i].kt3 = temp[i].kt3;
         }

        skip();
    }

    void Progress::changeKT4(int id, Prog temp_data){
        read();
        vector<Prog> temp;
        temp.resize(_db.size());

        unsigned long long int f = 1;

        searchProgress("id", id);

        for (unsigned long long int i = 0; i < _db.size(); i++) {
            Prog item = _db.at(i);
            if(item.id == id)
            {

                f = i;
                break;
            }
        }

         searchProgress("kt4", temp_data.kt4);
        for (unsigned long long int i = 0; i < _db.size(); i++)
         {
           if(temp_data.kt4 == ""){
                break;
           }
           if(i == f)
           {
                temp[i].kt4 = temp_data.kt4;
           }
           else
           {
                temp[i].kt4 = _db[i].kt4;
           }
         }

         for (unsigned long long int i = 0; i < temp.size(); i++){
               _db[i].kt4 = temp[i].kt4;
         }

        skip();
    }




    void Progress::push_back(Prog item){
        _db.push_back(item);
    }

    string Progress::searchProgressText(string k, string v)
    {

        for (unsigned int i = 0; i < _db.size(); i++)
        {
            Prog item = _db.at(i);

            stringstream ss;
            ss << item.id;
            string ID = ss.str();

            if(k == "name" && item.name == v){
               searchP = searchP + "ID: " + ID + ", Имя: " + item.name + ", Фамилия: " + item.surname +
                       ", Отчество: " + item.otch + ", Год: " + item.kt1 + ", Книга: " + item.kt2 + ", Кол-во: " + item.kt3 +
                       ", Состояние: " + item.kt4 + ";\n";
            }

            if(k == "surname" && item.surname == v){
                searchP = searchP + "ID: " + ID + ", Имя: " + item.name + ", Фамилия: " + item.surname +
                        ", Отчество: " + item.otch + ", Год: " + item.kt1 + ", Книга: " + item.kt2 + ", Кол-во: " + item.kt3 +
                        ", Состояние: " + item.kt4 + ";\n";
            }

            if(k == "otch" && item.otch == v){
                searchP = searchP + "ID: " + ID + ", Имя: " + item.name + ", Фамилия: " + item.surname +
                        ", Отчество: " + item.otch + ", Год: " + item.kt1 + ", Книга: " + item.kt2 + ", Кол-во: " + item.kt3 +
                        ", Состояние: " + item.kt4 + ";\n";
            }


            if(item.name.empty() && item.surname.empty() && item.otch.empty()){
                break;
            }

        }

          return searchP;

    }

        Progress Progress::searchProgress(string k, string result)
            {
                Progress select;

                for (unsigned int i = 1; i < _db.size(); i++)
                {
                    Prog item = _db.at(i);

                    if(k == "name" && item.name == result){
                       select.push_back(item);
                    }

                    if(k == "surname" && item.surname == result){
                       select.push_back(item);
                    }

                    if(k == "otch" && item.otch == result){
                        _db.push_back(item);
                    }

                }


                return select;
            }


    Progress Progress::searchProgress(string k, int v){ //тип значения поля - int
        Progress select;
        for (unsigned i = 0; i < _db.size(); i++){
            Prog item = _db.at(i);

            if(k == "id" && item.id == v){
               select.push_back(item);
            }
        }
        return select;
    }

