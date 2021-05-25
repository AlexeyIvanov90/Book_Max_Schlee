#include <class_property.h>

ClassProperty::ClassProperty():QObject(),m_bReadOnly(false){
}

void ClassProperty::setReadOnly(bool bReadOnly)
{
    m_bReadOnly=bReadOnly;
}

bool ClassProperty::isReadOnly() const
{
    return m_bReadOnly;
}


