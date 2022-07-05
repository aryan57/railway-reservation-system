/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/
#include <iostream>
#include <fstream>
using namespace std;

#include "testACFirstClass.h"


void UnitTest(ostream &os=cout)
{
    if (ACFirstClass::Type().GetName() != "AC First Class")
        os << "[Name] of [BookingClass : ACFirstClass] is INCORRECT.\n";
    else
        os << "[Name] of [BookingClass : ACFirstClass] is CORRECT.\n";

    if (ACFirstClass::Type().IsAC() != true)
        os << "[IsAC] of [BookingClass : ACFirstClass] is INCORRECT.\n";
    else
        os << "[IsAC] of [BookingClass : ACFirstClass] is CORRECT.\n";

    if (ACFirstClass::Type().IsSitting() != false)
        os << "[IsSitting] of [BookingClass : ACFirstClass] is INCORRECT.\n";
    else
        os << "[IsSitting] of [BookingClass : ACFirstClass] is CORRECT.\n";

    if (ACFirstClass::Type().GetNumberOfTiers() != 2)
        os << "[NumberOfTiers] of [BookingClass : ACFirstClass] is INCORRECT.\n";
    else
        os << "[NumberOfTiers] of [BookingClass : ACFirstClass] is CORRECT.\n";

    bool originalIsLuxury = ACFirstClass::Type().IsLuxury();
    double originalLoadFactor = ACFirstClass::Type().GetLoadFactor();

    ACFirstClass::Type().SetLoadFactor(89.65);
    if (ACFirstClass::Type().GetLoadFactor() != 89.65)
        os << "[SetLoadFactor] of [BookingClass : ACFirstClass] is INCORRECT.\n";
    else
        os << "[SetLoadFactor] of [BookingClass : ACFirstClass] is CORRECT.\n";

    ACFirstClass::Type().SetIsLuxury(true^originalIsLuxury);
    if (ACFirstClass::Type().IsLuxury() != true^originalIsLuxury)
        os << "[SetIsLuxury] of [BookingClass : ACFirstClass] is INCORRECT.\n";
    else
        os << "[SetIsLuxury] of [BookingClass : ACFirstClass] is CORRECT.\n";


    // changing to its original value
    ACFirstClass::Type().SetLoadFactor(originalLoadFactor);
    ACFirstClass::Type().SetIsLuxury(originalIsLuxury);


    if (ACFirstClass::Type().GetLoadFactor() != 3.0)
        os << "[LoadFactor] of [BookingClass : ACFirstClass] is set to " << ACFirstClass::Type().GetLoadFactor() << " which is NOT the original value " << 3.0 << "\n";
    else
        os << "[LoadFactor] of [BookingClass : ACFirstClass] is set to its original value of " << 3.0 << "\n";

    if (ACFirstClass::Type().IsLuxury() != true)
        os << "[IsLuxury] of [BookingClass : ACFirstClass] is set to " << ACFirstClass::Type().IsLuxury() << " which is NOT the original value " << true << "\n";
    else
        os << "[IsLuxury] of [BookingClass : ACFirstClass] is set to its original value of " << true << "\n";
}

int main()
{
    ofstream out;
    out.open("../Outputs/UnitTests_ACFirstClass.txt");
    UnitTest(out);
    out.close();
    return 0;
}