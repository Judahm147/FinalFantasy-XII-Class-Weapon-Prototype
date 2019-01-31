#ifndef WEAPONSTATS_H
#define WEAPONSTATS_H
#include<QStringList>

class WeaponStats{
public:
    WeaponStats();
    WeaponStats(QStringList elements, QStringList statuses);
    WeaponStats(const WeaponStats& other);
    void operator=(const WeaponStats& other);
    void clear();
    QStringList getElements() const;
    QStringList getStatuses() const;
private:
    QStringList m_Elements;
    QStringList m_Statuses;
};


#endif // WEAPONSTATS_H
