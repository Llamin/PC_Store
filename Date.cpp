#include <iostream>
#include <ctime>

#include "Date.h"

Date::Date(int year, int month, int day)
{
    this->year = year;
    this->month = month;
    this->day = day;
}

Date::Date(const Date& d)
{
    year = d.year;
    month = d.month;
    day = d.day;
}

int Date::getYear()
{
    return year;
}

int Date::getMonth()
{
    return month;
}

int Date::getDay()
{
    return day;
}

void Date::showDate()
{
    std::cout << "Date: " << day << '.' << month << '.' << year << std::endl;
}

void Date::setCurrentDate()
{
    time_t t = time(NULL);

    tm* timePtr = localtime(&t);

    year = timePtr->tm_year + 1900;
    month = timePtr->tm_mon;
    day = timePtr->tm_mday;
}
