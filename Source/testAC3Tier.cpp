/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/

#include <iostream>
#include <fstream>
using namespace std;

#include "testAC3Tier.h"


void UnitTest(ostream &os=cout)
{
    if (AC3Tier::Type().GetName() != "AC 3 Tier")
        os << "[Name] of [BookingClass : AC3Tier] is INCORRECT.\n";
    else
        os << "[Name] of [BookingClass : AC3Tier] is CORRECT.\n";

    if (AC3Tier::Type().IsAC() != true)
        os << "[IsAC] of [BookingClass : AC3Tier] is INCORRECT.\n";
    else
        os << "[IsAC] of [BookingClass : AC3Tier] is CORRECT.\n";

    if (AC3Tier::Type().IsSitting() != false)
        os << "[IsSitting] of [BookingClass : AC3Tier] is INCORRECT.\n";
    else
        os << "[IsSitting] of [BookingClass : AC3Tier] is CORRECT.\n";

    if (AC3Tier::Type().GetNumberOfTiers() != 3)
        os << "[NumberOfTiers] of [BookingClass : AC3Tier] is INCORRECT.\n";
    else
        os << "[NumberOfTiers] of [BookingClass : AC3Tier] is CORRECT.\n";

    bool originalIsLuxury = AC3Tier::Type().IsLuxury();
    double originalLoadFactor = AC3Tier::Type().GetLoadFactor();

    AC3Tier::Type().SetLoadFactor(89.65);
    if (AC3Tier::Type().GetLoadFactor() != 89.65)
        os << "[SetLoadFactor] of [BookingClass : AC3Tier] is INCORRECT.\n";
    else
        os << "[SetLoadFactor] of [BookingClass : AC3Tier] is CORRECT.\n";

    AC3Tier::Type().SetIsLuxury(true^originalIsLuxury);
    if (AC3Tier::Type().IsLuxury() != true^originalIsLuxury)
        os << "[SetIsLuxury] of [BookingClass : AC3Tier] is INCORRECT.\n";
    else
        os << "[SetIsLuxury] of [BookingClass : AC3Tier] is CORRECT.\n";


    // changing to its original value
    AC3Tier::Type().SetLoadFactor(originalLoadFactor);
    AC3Tier::Type().SetIsLuxury(originalIsLuxury);


    if (AC3Tier::Type().GetLoadFactor() != 1.75)
        os << "[LoadFactor] of [BookingClass : AC3Tier] is set to " << AC3Tier::Type().GetLoadFactor() << " which is NOT the original value " << 1.75 << "\n";
    else
        os << "[LoadFactor] of [BookingClass : AC3Tier] is set to its original value of " << 1.75 << "\n";

    if (AC3Tier::Type().IsLuxury() != false)
        os << "[IsLuxury] of [BookingClass : AC3Tier] is set to " << AC3Tier::Type().IsLuxury() << " which is NOT the original value " << false << "\n";
    else
        os << "[IsLuxury] of [BookingClass : AC3Tier] is set to its original value of " << false << "\n";
}

int main()
{
    ofstream out;
    out.open("../Outputs/UnitTests_AC3Tier.txt");
    UnitTest(out);
    out.close();
    return 0;
}