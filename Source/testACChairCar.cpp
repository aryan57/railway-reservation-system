/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/
#include <iostream>
#include <fstream>
using namespace std;

#include "testACChairCar.h"


void UnitTest(ostream &os=cout)
{
    if (ACChairCar::Type().GetName() != "AC Chair Car")
        os << "[Name] of [BookingClass : ACChairCar] is INCORRECT.\n";
    else
        os << "[Name] of [BookingClass : ACChairCar] is CORRECT.\n";

    if (ACChairCar::Type().IsAC() != true)
        os << "[IsAC] of [BookingClass : ACChairCar] is INCORRECT.\n";
    else
        os << "[IsAC] of [BookingClass : ACChairCar] is CORRECT.\n";

    if (ACChairCar::Type().IsSitting() != true)
        os << "[IsSitting] of [BookingClass : ACChairCar] is INCORRECT.\n";
    else
        os << "[IsSitting] of [BookingClass : ACChairCar] is CORRECT.\n";

    if (ACChairCar::Type().GetNumberOfTiers() != 0)
        os << "[NumberOfTiers] of [BookingClass : ACChairCar] is INCORRECT.\n";
    else
        os << "[NumberOfTiers] of [BookingClass : ACChairCar] is CORRECT.\n";

    bool originalIsLuxury = ACChairCar::Type().IsLuxury();
    double originalLoadFactor = ACChairCar::Type().GetLoadFactor();

    ACChairCar::Type().SetLoadFactor(89.65);
    if (ACChairCar::Type().GetLoadFactor() != 89.65)
        os << "[SetLoadFactor] of [BookingClass : ACChairCar] is INCORRECT.\n";
    else
        os << "[SetLoadFactor] of [BookingClass : ACChairCar] is CORRECT.\n";

    ACChairCar::Type().SetIsLuxury(true^originalIsLuxury);
    if (ACChairCar::Type().IsLuxury() != true^originalIsLuxury)
        os << "[SetIsLuxury] of [BookingClass : ACChairCar] is INCORRECT.\n";
    else
        os << "[SetIsLuxury] of [BookingClass : ACChairCar] is CORRECT.\n";


    // changing to its original value
    ACChairCar::Type().SetLoadFactor(originalLoadFactor);
    ACChairCar::Type().SetIsLuxury(originalIsLuxury);


    if (ACChairCar::Type().GetLoadFactor() != 1.25)
        os << "[LoadFactor] of [BookingClass : ACChairCar] is set to " << ACChairCar::Type().GetLoadFactor() << " which is NOT the original value " << 1.25 << "\n";
    else
        os << "[LoadFactor] of [BookingClass : ACChairCar] is set to its original value of " << 1.25 << "\n";

    if (ACChairCar::Type().IsLuxury() != false)
        os << "[IsLuxury] of [BookingClass : ACChairCar] is set to " << ACChairCar::Type().IsLuxury() << " which is NOT the original value " << false << "\n";
    else
        os << "[IsLuxury] of [BookingClass : ACChairCar] is set to its original value of " << false << "\n";
}

int main()
{
    ofstream out;
    out.open("../Outputs/UnitTests_ACChairCar.txt");
    UnitTest(out);
    out.close();
    return 0;
}