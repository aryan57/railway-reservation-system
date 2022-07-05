/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/
#include <iostream>
#include <fstream>
using namespace std;

#include "testSleeper.h"


void UnitTest(ostream &os=cout)
{
    if (Sleeper::Type().GetName() != "Sleeper")
        os << "[Name] of [BookingClass : Sleeper] is INCORRECT.\n";
    else
        os << "[Name] of [BookingClass : Sleeper] is CORRECT.\n";

    if (Sleeper::Type().IsAC() != false)
        os << "[IsAC] of [BookingClass : Sleeper] is INCORRECT.\n";
    else
        os << "[IsAC] of [BookingClass : Sleeper] is CORRECT.\n";

    if (Sleeper::Type().IsSitting() != false)
        os << "[IsSitting] of [BookingClass : Sleeper] is INCORRECT.\n";
    else
        os << "[IsSitting] of [BookingClass : Sleeper] is CORRECT.\n";

    if (Sleeper::Type().GetNumberOfTiers() != 3)
        os << "[NumberOfTiers] of [BookingClass : Sleeper] is INCORRECT.\n";
    else
        os << "[NumberOfTiers] of [BookingClass : Sleeper] is CORRECT.\n";

    bool originalIsLuxury = Sleeper::Type().IsLuxury();
    double originalLoadFactor = Sleeper::Type().GetLoadFactor();

    Sleeper::Type().SetLoadFactor(89.65);
    if (Sleeper::Type().GetLoadFactor() != 89.65)
        os << "[SetLoadFactor] of [BookingClass : Sleeper] is INCORRECT.\n";
    else
        os << "[SetLoadFactor] of [BookingClass : Sleeper] is CORRECT.\n";

    Sleeper::Type().SetIsLuxury(true^originalIsLuxury);
    if (Sleeper::Type().IsLuxury() != true^originalIsLuxury)
        os << "[SetIsLuxury] of [BookingClass : Sleeper] is INCORRECT.\n";
    else
        os << "[SetIsLuxury] of [BookingClass : Sleeper] is CORRECT.\n";


    // changing to its original value
    Sleeper::Type().SetLoadFactor(originalLoadFactor);
    Sleeper::Type().SetIsLuxury(originalIsLuxury);


    if (Sleeper::Type().GetLoadFactor() != 1.0)
        os << "[LoadFactor] of [BookingClass : Sleeper] is set to " << Sleeper::Type().GetLoadFactor() << " which is NOT the original value " << 1.0 << "\n";
    else
        os << "[LoadFactor] of [BookingClass : Sleeper] is set to its original value of " << 1.0 << "\n";

    if (Sleeper::Type().IsLuxury() != false)
        os << "[IsLuxury] of [BookingClass : Sleeper] is set to " << Sleeper::Type().IsLuxury() << " which is NOT the original value " << false << "\n";
    else
        os << "[IsLuxury] of [BookingClass : Sleeper] is set to its original value of " << false << "\n";
}

int main()
{
    ofstream out;
    out.open("../Outputs/UnitTests_Sleeper.txt");
    UnitTest(out);
    out.close();
    return 0;
}