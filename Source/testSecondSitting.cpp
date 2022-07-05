/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/
#include <iostream>
#include <fstream>
using namespace std;

#include "testSecondSitting.h"


void UnitTest(ostream &os=cout)
{
    if (SecondSitting::Type().GetName() != "Second Sitting")
        os << "[Name] of [BookingClass : SecondSitting] is INCORRECT.\n";
    else
        os << "[Name] of [BookingClass : SecondSitting] is CORRECT.\n";

    if (SecondSitting::Type().IsAC() != false)
        os << "[IsAC] of [BookingClass : SecondSitting] is INCORRECT.\n";
    else
        os << "[IsAC] of [BookingClass : SecondSitting] is CORRECT.\n";

    if (SecondSitting::Type().IsSitting() != true)
        os << "[IsSitting] of [BookingClass : SecondSitting] is INCORRECT.\n";
    else
        os << "[IsSitting] of [BookingClass : SecondSitting] is CORRECT.\n";

    if (SecondSitting::Type().GetNumberOfTiers() != 0)
        os << "[NumberOfTiers] of [BookingClass : SecondSitting] is INCORRECT.\n";
    else
        os << "[NumberOfTiers] of [BookingClass : SecondSitting] is CORRECT.\n";

    bool originalIsLuxury = SecondSitting::Type().IsLuxury();
    double originalLoadFactor = SecondSitting::Type().GetLoadFactor();

    SecondSitting::Type().SetLoadFactor(89.65);
    if (SecondSitting::Type().GetLoadFactor() != 89.65)
        os << "[SetLoadFactor] of [BookingClass : SecondSitting] is INCORRECT.\n";
    else
        os << "[SetLoadFactor] of [BookingClass : SecondSitting] is CORRECT.\n";

    SecondSitting::Type().SetIsLuxury(true^originalIsLuxury);
    if (SecondSitting::Type().IsLuxury() != true^originalIsLuxury)
        os << "[SetIsLuxury] of [BookingClass : SecondSitting] is INCORRECT.\n";
    else
        os << "[SetIsLuxury] of [BookingClass : SecondSitting] is CORRECT.\n";


    // changing to its original value
    SecondSitting::Type().SetLoadFactor(originalLoadFactor);
    SecondSitting::Type().SetIsLuxury(originalIsLuxury);


    if (SecondSitting::Type().GetLoadFactor() != 0.5)
        os << "[LoadFactor] of [BookingClass : SecondSitting] is set to " << SecondSitting::Type().GetLoadFactor() << " which is NOT the original value " << 0.5 << "\n";
    else
        os << "[LoadFactor] of [BookingClass : SecondSitting] is set to its original value of " << 0.5 << "\n";

    if (SecondSitting::Type().IsLuxury() != false)
        os << "[IsLuxury] of [BookingClass : SecondSitting] is set to " << SecondSitting::Type().IsLuxury() << " which is NOT the original value " << false << "\n";
    else
        os << "[IsLuxury] of [BookingClass : SecondSitting] is set to its original value of " << false << "\n";
}

int main()
{
    ofstream out;
    out.open("../Outputs/UnitTests_SecondSitting.txt");
    UnitTest(out);
    out.close();
    return 0;
}