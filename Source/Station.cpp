/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/

#include "Station.h"
#include "Railways.h"

Station::Station(string name)
{
    this->name_ = name;
}

Station::Station(const Station &s)
{
    this->name_ = s.GetName();
}
Station &Station::operator=(const Station &s)
{
    this->name_ = s.GetName();
    return *this;
}

Station::~Station()
{
}

string Station::GetName() const
{
    return name_;
}

int Station::GetDistance(const string &destination) const
{
    return Railways::IndianRailways().GetDistance(this->name_, destination);
}

ostream &operator<<(ostream &os, const Station &s)
{
    os << s.name_;
    return os;
}
