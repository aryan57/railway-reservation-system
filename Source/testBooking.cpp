/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/
#include <iostream>
#include <fstream>
using namespace std;

#include "testBooking.h"


void UnitTest(ostream &os=cout)
{
    Booking a1(Station("Mumbai"), Station("Delhi"), Date(15, 2, 2021), ACFirstClass::Type());


    vector<Booking *>::iterator it;
    for (it = Booking::sBookings.begin(); it < Booking::sBookings.end(); ++it)
    {
        os << *(*it);
        os << "\n";
    }

    
}

int main()
{
    ofstream out;
    out.open("../Outputs/UnitTests_Booking.txt");
    UnitTest(out);
    out.close();
    return 0;
}