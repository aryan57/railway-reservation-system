/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/
#include "AC3Tier.h"

const string AC3Tier::sName = "AC 3 Tier";
const bool AC3Tier::sIsAC = true;
const bool AC3Tier::sIsSitting = false;
const int AC3Tier::sNumberOfTiers = 3;

bool AC3Tier::sIsLuxury = false;
double AC3Tier::sFareLoadFactor = 1.75;

double AC3Tier::GetLoadFactor() const
{
    return sFareLoadFactor;
}

string AC3Tier::GetName() const
{
    return sName;
}

bool AC3Tier::IsSitting() const
{
    return sIsSitting;
}

bool AC3Tier::IsAC() const
{
    return sIsAC;
}

int AC3Tier::GetNumberOfTiers() const
{
    return sNumberOfTiers;
}

bool AC3Tier::IsLuxury() const
{
    return sIsLuxury;
}

AC3Tier &AC3Tier::Type()
{
    static AC3Tier myObj;
    return myObj;
}

void AC3Tier::SetLoadFactor(const double &newLoadFactor)
{
    sFareLoadFactor = newLoadFactor;
}

void AC3Tier::SetIsLuxury(const bool &newIsLuxury)
{
    sIsLuxury = newIsLuxury;
}

ostream &operator<<(ostream &os, const AC3Tier &object)
{
    os << "Travel Class : " << object.sName << "\n";
    os << "   :   Mode = " << (object.IsSitting() ? "Sitting" : "Sleeping") << "\n";
    os << "   :   Comfort = " << (object.IsAC() ? "AC" : "Non-AC") << "\n";
    os << "   :   Bunks = " << object.GetNumberOfTiers() << "\n";
    os << "   :   Luxury = " << (object.IsLuxury() ? "Yes" : "No") << "\n";
    return os;
}