/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/

#include "Date.h"

static vector<string> monthNames = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
static vector<string> dayNames = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

Date::Date(UINT d, UINT m, UINT y)
{
    Date::date_ = d;
    Date::month_ = m;
    Date::year_ = y;
}

// copy constructor must be called as constant refrence, otherwise it will run in infinite loop.
Date::Date(const Date &dt)
{
    this->date_ = dt.date_;
    this->month_ = dt.month_;
    this->year_ = dt.year_;
}

Date &Date::operator=(const Date &dt)
{
    this->date_ = dt.date_;
    this->month_ = dt.month_;
    this->year_ = dt.year_;
    return *this;
}

Date::~Date() {}

bool Date::IsValidDate()
{
    return true;
}

string Date::Day()
{
    // Zeller’s Algorithm

    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};

    int d = date_;
    int m = month_;
    int y = year_;

    y -= m < 3;
    int index = (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;

    return dayNames[index];
}

const string Date::ToString() const
{
    return to_string(date_)+"/"+monthNames[month_ - 1]+"/"+to_string(year_);
}

ostream &operator<<(ostream &os, const Date &dt)
{
    os << dt.ToString();
    return os;
}

