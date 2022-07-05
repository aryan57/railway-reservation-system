/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/
#include "ACChairCar.h"

const string ACChairCar::sName = "AC Chair Car";
const bool ACChairCar::sIsAC = true;
const bool ACChairCar::sIsSitting = true;
const int ACChairCar::sNumberOfTiers = 0;

bool ACChairCar::sIsLuxury = false;
double ACChairCar::sFareLoadFactor = 1.25;

double ACChairCar::GetLoadFactor() const
{
    return sFareLoadFactor;
}

string ACChairCar::GetName() const
{
    return sName;
}

bool ACChairCar::IsSitting() const
{
    return sIsSitting;
}

bool ACChairCar::IsAC() const
{
    return sIsAC;
}

int ACChairCar::GetNumberOfTiers() const
{
    return sNumberOfTiers;
}

bool ACChairCar::IsLuxury() const
{
    return sIsLuxury;
}

ACChairCar &ACChairCar::Type()
{
    static ACChairCar myObj;
    return myObj;
}

void ACChairCar::SetLoadFactor(const double &newLoadFactor)
{
    sFareLoadFactor = newLoadFactor;
}

void ACChairCar::SetIsLuxury(const bool &newIsLuxury)
{
    sIsLuxury = newIsLuxury;
}

ostream &operator<<(ostream &os, const ACChairCar &object)
{
    os << "Travel Class : " << object.sName << "\n";
    os << "   :   Mode = " << (object.IsSitting() ? "Sitting" : "Sleeping") << "\n";
    os << "   :   Comfort = " << (object.IsAC() ? "AC" : "Non-AC") << "\n";
    os << "   :   Bunks = " << object.GetNumberOfTiers() << "\n";
    os << "   :   Luxury = " << (object.IsLuxury() ? "Yes" : "No") << "\n";
    return os;
}
