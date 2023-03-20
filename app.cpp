#include <QApplication>
#include <QPushButton>

int main (int argc, char * argv[])
{
    QApplication app(argc, argv);
    QPushButton button;
    button.setText("Boutton");
    QFont font("Courier");
    button.setFont(font);
    button.show();
    return app.exec();
}