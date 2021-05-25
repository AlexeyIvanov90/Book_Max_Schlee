#ifndef CLASS_PROPERTY_H
#define CLASS_PROPERTY_H
#include <QWidget>

class ClassProperty:public QObject {
    Q_OBJECT

    /*свойства поля
     1. Тип и Имя поля
     2. READ имя метода чтения (обязательный параметр)
     3. WRITE записи
     4. RESET сброс значений
     5. DISIGNABLE булевое значение наличия свойства в инспекторе QT designer
     6. SCRIPTABLE булевое значение для доступа к QT Script
     7. STORED булевое значени отвечающее за сохранение свойства при сохранении объекта
     */

    Q_PROPERTY(bool readOnly READ isReadOnly WRITE setReadOnly)
private:
    bool m_bReadOnly;

public:
    ClassProperty();

public:
    void setReadOnly(bool bReadOnly);
    bool isReadOnly() const;
};

#endif // CLASS_PROPERTY_H
