/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/

#include <iostream>
#include <fstream>
using namespace std;

#include "testStation.h"


void UnitTest(ostream &os=cout)
{
    Station s1("Mumbai");
    Station s2=s1;
    Station s3(s1);


    if(s1.GetName()!="Mumbai")
        os<<"Method GetName() of class \"Station\" is INCORRECT\n";
    else
        os<<"Method GetName() of class \"Station\" is CORRECT\n";

    if(s1.GetDistance("Delhi")!=1447)
        os<<"Method GetDistance() of class \"Station\" is INCORRECT\n";
    else
        os<<"Method GetDistance() of class \"Station\" is CORRECT\n";
    

    if(s1.GetName()==s2.GetName())
        os<<"Copy Assignment Operator of class \"Station\" is CORRECT\n";
    else
        os<<"Copy Assignment Operator of class \"Station\" is INCORRECT\n";

    if(s1.GetName()==s3.GetName())
        os<<"Copy Constructor of class \"Station\" is CORRECT\n";
    else
        os<<"Copy Constructor of class \"Station\" is INCORRECT\n";

}

int main()
{
    ofstream out;
    out.open("../Outputs/UnitTests_Station.txt");
    UnitTest(out);
    out.close();
    return 0;
}