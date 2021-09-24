#include "calculette.h"
#include<QApplication>

int main(int argc, char *argv[])
{
    QApplication myApp(argc, argv);
    calculette myCalcu;
    myCalcu.show();
    return myApp.exec();
}
