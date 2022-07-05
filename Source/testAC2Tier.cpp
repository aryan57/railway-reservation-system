/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/

#include <iostream>
#include <fstream>
using namespace std;

#include "testAC2Tier.h"


void UnitTest(ostream &os=cout)
{
    if (AC2Tier::Type().GetName() != "AC 2 Tier")
        os << "[Name] of [BookingClass : AC2Tier] is INCORRECT.\n";
    else
        os << "[Name] of [BookingClass : AC2Tier] is CORRECT.\n";

    if (AC2Tier::Type().IsAC() != true)
        os << "[IsAC] of [BookingClass : AC2Tier] is INCORRECT.\n";
    else
        os << "[IsAC] of [BookingClass : AC2Tier] is CORRECT.\n";

    if (AC2Tier::Type().IsSitting() != false)
        os << "[IsSitting] of [BookingClass : AC2Tier] is INCORRECT.\n";
    else
        os << "[IsSitting] of [BookingClass : AC2Tier] is CORRECT.\n";

    if (AC2Tier::Type().GetNumberOfTiers() != 2)
        os << "[NumberOfTiers] of [BookingClass : AC2Tier] is INCORRECT.\n";
    else
        os << "[NumberOfTiers] of [BookingClass : AC2Tier] is CORRECT.\n";

    bool originalIsLuxury = AC2Tier::Type().IsLuxury();
    double originalLoadFactor = AC2Tier::Type().GetLoadFactor();

    AC2Tier::Type().SetLoadFactor(89.65);
    if (AC2Tier::Type().GetLoadFactor() != 89.65)
        os << "[SetLoadFactor] of [BookingClass : AC2Tier] is INCORRECT.\n";
    else
        os << "[SetLoadFactor] of [BookingClass : AC2Tier] is CORRECT.\n";

    AC2Tier::Type().SetIsLuxury(true^originalIsLuxury);
    if (AC2Tier::Type().IsLuxury() != true^originalIsLuxury)
        os << "[SetIsLuxury] of [BookingClass : AC2Tier] is INCORRECT.\n";
    else
        os << "[SetIsLuxury] of [BookingClass : AC2Tier] is CORRECT.\n";


    // changing to its original value
    AC2Tier::Type().SetLoadFactor(originalLoadFactor);
    AC2Tier::Type().SetIsLuxury(originalIsLuxury);


    if (AC2Tier::Type().GetLoadFactor() != 2.0)
        os << "[LoadFactor] of [BookingClass : AC2Tier] is set to " << AC2Tier::Type().GetLoadFactor() << " which is NOT the original value " << 2.0 << "\n";
    else
        os << "[LoadFactor] of [BookingClass : AC2Tier] is set to its original value of " << 2.0 << "\n";

    if (AC2Tier::Type().IsLuxury() != false)
        os << "[IsLuxury] of [BookingClass : AC2Tier] is set to " << AC2Tier::Type().IsLuxury() << " which is NOT the original value " << false << "\n";
    else
        os << "[IsLuxury] of [BookingClass : AC2Tier] is set to its original value of " << false << "\n";
}

int main()
{
    ofstream out;
    out.open("../Outputs/UnitTests_AC2Tier.txt");
    UnitTest(out);
    out.close();
    return 0;
}