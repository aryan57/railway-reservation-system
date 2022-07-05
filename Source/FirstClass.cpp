/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/
#include "FirstClass.h"

const string FirstClass::sName = "First Class";
const bool FirstClass::sIsAC = false;
const bool FirstClass::sIsSitting = false;
const int FirstClass::sNumberOfTiers = 2;

bool FirstClass::sIsLuxury = true;
double FirstClass::sFareLoadFactor = 2.0;

double FirstClass::GetLoadFactor() const
{
    return sFareLoadFactor;
}

string FirstClass::GetName() const
{
    return sName;
}

bool FirstClass::IsSitting() const
{
    return sIsSitting;
}

bool FirstClass::IsAC() const
{
    return sIsAC;
}

int FirstClass::GetNumberOfTiers() const
{
    return sNumberOfTiers;
}

bool FirstClass::IsLuxury() const
{
    return sIsLuxury;
}

FirstClass &FirstClass::Type()
{
    static FirstClass myObj;
    return myObj;
}

void FirstClass::SetLoadFactor(const double &newLoadFactor)
{
    sFareLoadFactor = newLoadFactor;
}

void FirstClass::SetIsLuxury(const bool &newIsLuxury)
{
    sIsLuxury = newIsLuxury;
}

ostream &operator<<(ostream &os, const FirstClass &object)
{
    os << "Travel Class : " << object.sName << "\n";
    os << "   :   Mode = " << (object.IsSitting() ? "Sitting" : "Sleeping") << "\n";
    os << "   :   Comfort = " << (object.IsAC() ? "AC" : "Non-AC") << "\n";
    os << "   :   Bunks = " << object.GetNumberOfTiers() << "\n";
    os << "   :   Luxury = " << (object.IsLuxury() ? "Yes" : "No") << "\n";
    return os;
}

