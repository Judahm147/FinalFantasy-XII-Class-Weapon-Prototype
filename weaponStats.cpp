#include"weaponStats.h"

WeaponStats::WeaponStats(): m_Elements(""), m_Statuses(""){}

WeaponStats::WeaponStats(QStringList elements, QStringList statuses)
    : m_Elements(elements), m_Statuses(statuses){

}

WeaponStats::WeaponStats(const WeaponStats& other):
    m_Elements(other.m_Elements), m_Statuses(other.m_Statuses){

}

void WeaponStats::clear(){
    m_Elements.clear();
    m_Statuses.clear();
}

void WeaponStats::operator =(const WeaponStats& other){
    m_Elements = other.m_Elements;
    m_Statuses = other.m_Statuses;
}

QStringList WeaponStats::getElements() const{
    return m_Elements;
}

QStringList WeaponStats::getStatuses() const{
    return m_Statuses;
}
