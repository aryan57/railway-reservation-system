/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/
#include <iostream>
#include <fstream>
using namespace std;

#include "testRailways.h"


void UnitTest(ostream &os=cout)
{
    if(Railways::IndianRailways().GetDistance("Mumbai","Delhi")!=1447)
        os<<"Method GetDistance() of class \"Railways\" is INCORRECT\n";
    else
        os<<"Method GetDistance() of class \"Railways\" is CORRECT\n";

    if(Railways::IndianRailways().GetDistance("Mumbai","Ranchi")!=-1)
        os<<"BadDistance throw of Method GetDistance() of class \"Railways\" is INCORRECT\n";
    else
        os<<"BadDistance throw of Method GetDistance() of class \"Railways\" is CORRECT\n";

    if(Railways::IndianRailways().GetStation("Mumbai")->GetName()!="Mumbai")
        os<<"Method GetStation() of class \"Railways\" is INCORRECT\n";
    else
        os<<"Method GetStation() of class \"Railways\" is CORRECT\n";

    if(Railways::IndianRailways().GetStation("Ranchi")->GetName()!="_BAD_NODE_")
        os<<"BadNode throw of Method GetStation() of class \"Railways\" is INCORRECT\n";
    else
        os<<"BadNode throw of Method GetStation() of class \"Railways\" is CORRECT\n";
}

int main()
{
    ofstream out;
    out.open("../Outputs/UnitTests_Railways.txt");
    UnitTest(out);
    out.close();
    return 0;
}