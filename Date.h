#ifndef DATE_H
#define DATE_H

#include <iostream>

class Date
{
private:
    int m_day;
    int m_month;
    int m_year;
 
public:
    Date(int day, int month, int year);
 
    void SetDate(int day, int month, int year);
 
    int getDay() const { return m_day; }
    int getMonth() const { return m_month; }
    int getYear() const { return m_year; }
};
 
#endif