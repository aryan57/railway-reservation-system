/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/
#include "ACFirstClass.h"

const string ACFirstClass::sName = "AC First Class";
const bool ACFirstClass::sIsAC = true;
const bool ACFirstClass::sIsSitting = false;
const int ACFirstClass::sNumberOfTiers = 2;

bool ACFirstClass::sIsLuxury = true;
double ACFirstClass::sFareLoadFactor = 3.0;

double ACFirstClass::GetLoadFactor() const
{
    return sFareLoadFactor;
}

string ACFirstClass::GetName() const
{
    return sName;
}

bool ACFirstClass::IsSitting() const
{
    return sIsSitting;
}

bool ACFirstClass::IsAC() const
{
    return sIsAC;
}

int ACFirstClass::GetNumberOfTiers() const
{
    return sNumberOfTiers;
}

bool ACFirstClass::IsLuxury() const
{
    return sIsLuxury;
}

ACFirstClass &ACFirstClass::Type()
{
    static ACFirstClass myObj;
    return myObj;
}

void ACFirstClass::SetLoadFactor(const double &newLoadFactor)
{
    sFareLoadFactor = newLoadFactor;
}

void ACFirstClass::SetIsLuxury(const bool &newIsLuxury)
{
    sIsLuxury = newIsLuxury;
}

ostream &operator<<(ostream &os, const ACFirstClass &object)
{
    os << "Travel Class : " << object.sName << "\n";
    os << "   :   Mode = " << (object.IsSitting() ? "Sitting" : "Sleeping") << "\n";
    os << "   :   Comfort = " << (object.IsAC() ? "AC" : "Non-AC") << "\n";
    os << "   :   Bunks = " << object.GetNumberOfTiers() << "\n";
    os << "   :   Luxury = " << (object.IsLuxury() ? "Yes" : "No") << "\n";
    return os;
}