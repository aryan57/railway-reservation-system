/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/

#include "Sleeper.h"

const string Sleeper::sName = "Sleeper";
const bool Sleeper::sIsAC = false;
const bool Sleeper::sIsSitting = false;
const int Sleeper::sNumberOfTiers = 3;

bool Sleeper::sIsLuxury = false;
double Sleeper::sFareLoadFactor = 1.00;

double Sleeper::GetLoadFactor() const
{
    return sFareLoadFactor;
}

string Sleeper::GetName() const
{
    return sName;
}

bool Sleeper::IsSitting() const
{
    return sIsSitting;
}

bool Sleeper::IsAC() const
{
    return sIsAC;
}

int Sleeper::GetNumberOfTiers() const
{
    return sNumberOfTiers;
}

bool Sleeper::IsLuxury() const
{
    return sIsLuxury;
}

Sleeper &Sleeper::Type()
{
    static Sleeper myObj;
    return myObj;
}

void Sleeper::SetLoadFactor(const double &newLoadFactor)
{
    sFareLoadFactor = newLoadFactor;
}

void Sleeper::SetIsLuxury(const bool &newIsLuxury)
{
    sIsLuxury = newIsLuxury;
}

ostream &operator<<(ostream &os, const Sleeper &object)
{
    os << "Travel Class : " << object.sName << "\n";
    os << "   :   Mode = " << (object.IsSitting() ? "Sitting" : "Sleeping") << "\n";
    os << "   :   Comfort = " << (object.IsAC() ? "AC" : "Non-AC") << "\n";
    os << "   :   Bunks = " << object.GetNumberOfTiers() << "\n";
    os << "   :   Luxury = " << (object.IsLuxury() ? "Yes" : "No") << "\n";
    return os;
}
