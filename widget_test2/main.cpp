#include "mainwindow.h"

#include <QApplication>


// 0 Avaa pääikkunan, KIRJAUDU ohjaa uudelle formille, Annetaan nimi ja tallennetaan
//Siirtää annetun nimen pääikkunan näytölle.

//1-2 singletonluokka. 1 ja 2 form ottaa nimen, joka tulee näkymään main.

//4 Henkilötiedot formille siirttyy automaattisesti nimi joka annettu aikaisemmin.


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
