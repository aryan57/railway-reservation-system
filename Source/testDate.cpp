/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/
/*
    g++ testDate.cpp Date.cpp
    
*/

#include <iostream>
#include <fstream>
using namespace std;

#include "testDate.h"


void UnitTest(ostream &os=cout)
{
    Date d1(05,07,2001);
    Date d2=d1;
    Date d3(d1);


    if(d1.ToString()==d2.ToString())
        os<<"Copy Assignment Operator of class \"Date\" is CORRECT\n";
    else
        os<<"Copy Assignment Operator of class \"Date\" is INCORRECT\n";

    if(d1.ToString()==d3.ToString())
        os<<"Copy Constructor of class \"Date\" is CORRECT\n";
    else
        os<<"Copy Constructor of class \"Date\" is INCORRECT\n";

    
    Date d4(29,02,2020);

    if(d4.Day()!="Saturday")
        os<<"Method Day() of class \"Date\" is INCORRECT\n";
    else
        os<<"Method Day() of class \"Date\" is CORRECT\n";

    if(d4.ToString()!="29/Feb/2020")
        os<<"Method ToString() of class \"Date\" is INCORRECT\n";
    else
        os<<"Method ToString() of class \"Date\" is CORRECT\n";
}

int main()
{
    ofstream out;
    out.open("../Outputs/UnitTests_Date.txt");
    UnitTest(out);
    out.close();
    return 0;
}