/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/

/*
    g++ AC2Tier.cpp AC3Tier.cpp ACChairCar.cpp ACFirstClass.cpp Booking.cpp Date.cpp FirstClass.cpp Passenger.cpp Railways.cpp SecondSitting.cpp Sleeper.cpp Station.cpp Application.cpp
*/

#include <iostream>
#include <fstream>
using namespace std;

#include "Date.h"
#include "Station.h"
#include "Railways.h"
#include "Booking.h"

#include "BookingClass.h"
#include "ACChairCar.h"
#include "SecondSitting.h"
#include "AC2Tier.h"
#include "ACFirstClass.h"
#include "FirstClass.h"
#include "AC3Tier.h"
#include "Sleeper.h"


void TestBookingApplication() {

    ofstream out;
    out.open("../Outputs/TestBookingApplication.txt");

    // Bookings by different booking classes
    // <BookingClasses>::Type() returns the constant object of the respective type
    Booking b1(Station("Mumbai"), Station("Mumbai"), Date(15, 2, 2021), ACFirstClass::Type());
    // Fare should be same
    Booking b2(Station("Kolkata"), Station("Delhi"), Date(5, 3, 2021), AC2Tier::Type());
    Booking b3(Station("Delhi"), Station("Kolkata"), Date(17, 3, 2021), AC2Tier::Type());
    // Type are same but Fare should be different
    Booking b4(Station("Mumbai"), Station("Delhi"), Date(23, 3, 2021), ACChairCar::Type());
    Booking b5(Station("Chennai"), Station("Delhi"), Date(25, 4, 2021), ACChairCar::Type());
    // Type are diffrent so Fair should be different
    Booking b6(Station("Chennai"), Station("Kolkata"), Date(7, 5, 2021), Sleeper::Type());
    Booking b7(Station("Chennai"), Station("Kolkata"), Date(19, 5, 2021), SecondSitting::Type());
    // Identical Bookings on same Date should be possible
    Booking b8(Station("Delhi"), Station("Mumbai"), Date(22, 5, 2021), SecondSitting::Type());
    Booking b9(Station("Delhi"), Station("Mumbai"), Date(22, 5, 2021), SecondSitting::Type());
    // Different Bookings on Same date should be possible
    Booking b10(Station("Delhi"), Station("Mumbai"), Date(22, 5, 2021), SecondSitting::Type());
    Booking b11(Station("Bangalore"), Station("Mumbai"), Date(22, 5, 2021), FirstClass::Type());
    Booking b12(Station("Mumbai"), Station("Mumbai"), Date(22, 5, 2021), FirstClass::Type());

    // Output the bookings done where sBookings is the collection of bookings done
    vector<Booking*>::iterator it;
    for (it = Booking::sBookings.begin(); it < Booking::sBookings.end(); ++it) {
        out << *(*it);
    }

    out.close();

    return;
}

int main()
{
    TestBookingApplication();
    return 0;
}