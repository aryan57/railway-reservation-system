/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/
#include <iostream>
#include <fstream>
using namespace std;

#include "testFirstClass.h"


void UnitTest(ostream &os=cout)
{
   if (FirstClass::Type().GetName() != "First Class")
        os << "[Name] of [BookingClass : FirstClass] is INCORRECT.\n";
    else
        os << "[Name] of [BookingClass : FirstClass] is CORRECT.\n";

    if (FirstClass::Type().IsAC() != false)
        os << "[IsAC] of [BookingClass : FirstClass] is INCORRECT.\n";
    else
        os << "[IsAC] of [BookingClass : FirstClass] is CORRECT.\n";

    if (FirstClass::Type().IsSitting() != false)
        os << "[IsSitting] of [BookingClass : FirstClass] is INCORRECT.\n";
    else
        os << "[IsSitting] of [BookingClass : FirstClass] is CORRECT.\n";

    if (FirstClass::Type().GetNumberOfTiers() != 2)
        os << "[NumberOfTiers] of [BookingClass : FirstClass] is INCORRECT.\n";
    else
        os << "[NumberOfTiers] of [BookingClass : FirstClass] is CORRECT.\n";

    bool originalIsLuxury = FirstClass::Type().IsLuxury();
    double originalLoadFactor = FirstClass::Type().GetLoadFactor();

    FirstClass::Type().SetLoadFactor(89.65);
    if (FirstClass::Type().GetLoadFactor() != 89.65)
        os << "[SetLoadFactor] of [BookingClass : FirstClass] is INCORRECT.\n";
    else
        os << "[SetLoadFactor] of [BookingClass : FirstClass] is CORRECT.\n";

    FirstClass::Type().SetIsLuxury(true^originalIsLuxury);
    if (FirstClass::Type().IsLuxury() != true^originalIsLuxury)
        os << "[SetIsLuxury] of [BookingClass : FirstClass] is INCORRECT.\n";
    else
        os << "[SetIsLuxury] of [BookingClass : FirstClass] is CORRECT.\n";


    // changing to its original value
    FirstClass::Type().SetLoadFactor(originalLoadFactor);
    FirstClass::Type().SetIsLuxury(originalIsLuxury);


    if (FirstClass::Type().GetLoadFactor() != 2.0)
        os << "[LoadFactor] of [BookingClass : FirstClass] is set to " << FirstClass::Type().GetLoadFactor() << " which is NOT the original value " << 2.0 << "\n";
    else
        os << "[LoadFactor] of [BookingClass : FirstClass] is set to its original value of " << 2.0 << "\n";

    if (FirstClass::Type().IsLuxury() != true)
        os << "[IsLuxury] of [BookingClass : FirstClass] is set to " << FirstClass::Type().IsLuxury() << " which is NOT the original value " << true << "\n";
    else
        os << "[IsLuxury] of [BookingClass : FirstClass] is set to its original value of " << true << "\n";
}

int main()
{
    ofstream out;
    out.open("../Outputs/UnitTests_FirstClass.txt");
    UnitTest(out);
    out.close();
    return 0;
}