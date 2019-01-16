#include <QApplication>
#include <QLabel>
#include <QWidget>
int main(int argc, char *argv[ ])
{
    QApplication app(argc, argv);
    QLabel hello("Heloooow");
    hello.setWindowTitle("My First Qt Program");
    hello.resize(400, 100);
    hello.move(500, 200);
    hello.show();
    return app.exec();
}
