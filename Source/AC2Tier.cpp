/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/

#include "AC2Tier.h"

const string AC2Tier::sName = "AC 2 Tier";
const bool AC2Tier::sIsAC = true;
const bool AC2Tier::sIsSitting = false;
const int AC2Tier::sNumberOfTiers = 2;

bool AC2Tier::sIsLuxury = false;
double AC2Tier::sFareLoadFactor = 2.0;

double AC2Tier::GetLoadFactor() const
{
    return sFareLoadFactor;
}

string AC2Tier::GetName() const
{
    return sName;
}

bool AC2Tier::IsSitting() const
{
    return sIsSitting;
}

bool AC2Tier::IsAC() const
{
    return sIsAC;
}

int AC2Tier::GetNumberOfTiers() const
{
    return sNumberOfTiers;
}

bool AC2Tier::IsLuxury() const
{
    return sIsLuxury;
}

AC2Tier &AC2Tier::Type()
{
    static AC2Tier myObj;
    return myObj;
}

void AC2Tier::SetLoadFactor(const double &newLoadFactor)
{
    sFareLoadFactor = newLoadFactor;
}

void AC2Tier::SetIsLuxury(const bool &newIsLuxury)
{
    sIsLuxury = newIsLuxury;
}

ostream &operator<<(ostream &os, const AC2Tier &object)
{
    os << "Travel Class : " << object.sName << "\n";
    os << "   :   Mode = " << (object.IsSitting() ? "Sitting" : "Sleeping") << "\n";
    os << "   :   Comfort = " << (object.IsAC() ? "AC" : "Non-AC") << "\n";
    os << "   :   Bunks = " << object.GetNumberOfTiers() << "\n";
    os << "   :   Luxury = " << (object.IsLuxury() ? "Yes" : "No") << "\n";
    return os;
}
