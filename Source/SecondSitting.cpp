/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/

#include "SecondSitting.h"

const string SecondSitting::sName = "Second Sitting";
const bool SecondSitting::sIsAC = false;
const bool SecondSitting::sIsSitting = true;
const int SecondSitting::sNumberOfTiers = 0;

double SecondSitting::sFareLoadFactor = 0.50;
bool SecondSitting::sIsLuxury = false;

double SecondSitting::GetLoadFactor() const
{
    return sFareLoadFactor;
}

string SecondSitting::GetName() const
{
    return sName;
}

bool SecondSitting::IsSitting() const
{
    return sIsSitting;
}

bool SecondSitting::IsAC() const
{
    return sIsAC;
}

int SecondSitting::GetNumberOfTiers() const
{
    return sNumberOfTiers;
}

bool SecondSitting::IsLuxury() const
{
    return sIsLuxury;
}

SecondSitting &SecondSitting::Type()
{
    static SecondSitting myObj;
    return myObj;
}

void SecondSitting::SetLoadFactor(const double &newLoadFactor)
{
    sFareLoadFactor = newLoadFactor;
}

void SecondSitting::SetIsLuxury(const bool &newIsLuxury)
{
    sIsLuxury = newIsLuxury;
}

ostream &operator<<(ostream &os, const SecondSitting &object)
{
    os << "Travel Class : " << object.sName << "\n";
    os << "   :   Mode = " << (object.IsSitting() ? "Sitting" : "Sleeping") << "\n";
    os << "   :   Comfort = " << (object.IsAC() ? "AC" : "Non-AC") << "\n";
    os << "   :   Bunks = " << object.GetNumberOfTiers() << "\n";
    os << "   :   Luxury = " << (object.IsLuxury() ? "Yes" : "No") << "\n";
    return os;
}
