#ifndef DATE_H
#define DATE_H

class Date
{
    int year;
    int month;
    int day;
public:
    Date(int year, int month, int day);
    Date(const Date& d);
    int getYear();
    int getMonth();
    int getDay();
    void showDate();
    void setCurrentDate();

};

#endif // DATE_H
