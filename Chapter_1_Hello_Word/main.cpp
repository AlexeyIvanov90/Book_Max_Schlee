//Hello word

#include <QApplication>
#include <QtWidgets>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    QLabel lbl("Hello Word");
    lbl.show();
    return app.exec();
}
