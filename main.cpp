#include <QApplication>
#include "fenetre.hpp"

int main (int argc, char * argv[])
{
    QApplication app (argc, argv);
    Fenetre fenetre;
    fenetre.show();
    return app.exec();
}