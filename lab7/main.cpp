#include <QCoreApplication>
#include <QtSql>
#include <QSqlQuery>
#include <QSqlRecord>

static bool createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:\\Study\\ProgrammingLanguages\\QT_181_352_Gerasimenko\\GUI\\lab7\\addressbook");
    //db.setUserName("elton");
    //db.setHostName("epica");
    //db.setPassword("password");
    if (!db.open())
    {
        qDebug() << "Cannot open database:" << db.lastError().text();
        return false;
    }
    return true;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Соединяемся с менеджером баз данных
    if (!createConnection()) {
        return -1;
    }
    // Создаем базу
    QSqlQuery query;
    QString str = "CREATE TABLE addressbook (number INTEGER PRIMARY KEY AUTO_INCREMENT, name VARCHAR(15), phone VARCHAR(12), email VARCHAR(15));";
    if (!query.exec(str)) {
        qDebug() << "Unable to create a table";
    }

    // Добавляем данные в базу
    QString strF ="INSERT INTO addressbook (name, phone, email) "
                  "VALUES('%2', '%3', '%4');";
    str = strF.arg("Piggy")
            .arg("+49 631322187")
            .arg("piggy@mega.de");
    if (!query.exec(str))
    {
        qDebug() << "Unable to make insert operation";
    }
    str = strF.arg("Kermit")
            .arg("+49 631322181")
            .arg("kermit@mega.de");
    if (!query.exec(str)) {
        qDebug() << "Unable to make insert operation";
    }
    //    if (!query.exec("SELECT * FROM addressbook;")) {
    //        qDebug() << "Unable to execute query — exiting";
    //        return 1;
    //    }
    //    if (!query.exec("SELECT email, phone FROM addressbook WHERE name = 'Piggy';")) {
    //                qDebug() << "Unable to execute query — exiting";
    //                return 1;
    //            }
    if (!query.exec("SELECT COUNT (*) as count FROM addressbook"))
    {
        qDebug() << "Unable to execute query — exiting";
        return 1;
    }

    if (!query.exec("SELECT COUNT (Phone) as count FROM addressbook WHERE name = 'Piggy'"))
    {
        qDebug() << "Unable to execute query — exiting";
        return 1;
    }

    // Считываем данные из базы
    QSqlRecord rec = query.record();
    int nNumber = 0;
    QString strName;
    QString strPhone;
    QString strEmail;
    //while (query.next()) {
    //    nNumber = query.value(rec.indexOf("number")).toInt();
    //    strName = query.value(rec.indexOf("name")).toString();
    //    strPhone = query.value(rec.indexOf("phone")).toString();
    //    strEmail = query.value(rec.indexOf("email")).toString();
    //    qDebug() << nNumber << " " << strName << ";\t"
    //                 << strPhone << ";\t" << strEmail;
    //    }
    while (query.next()) {
        //nNumber = query.value(0).toInt();
        //strName = query.value(1).toString();
        //strPhone = query.value(2).toString();
        //strEmail = query.value(3).toString();

        nNumber = query.value(0).toInt();
        qDebug() << nNumber;

    while (query.next()) {
            strPhone = query.value(0).toString();
            qDebug() << strPhone;

        }
        return 0;
    }
}
