//Свойства поля

#include <QApplication>
#include <QtWidgets>
#include <class_property.h>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    ClassProperty MyClass;

    QMessageBox msb_1, msb_2;
    msb_1.setText(QString::number(MyClass.isReadOnly()));
    msb_1.show();

    MyClass.setReadOnly(true);

    msb_2.setText(QString::number(MyClass.isReadOnly()));
    msb_2.show();

    return app.exec();
}
