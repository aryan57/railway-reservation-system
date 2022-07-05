/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/
#ifndef BOOKING_H
#define BOOKING_H

#include "Station.h"
#include "Date.h"
#include "BookingClass.h"
#include "Passenger.h"
#include "Railways.h"

#include "BookingClass.h"
#include "ACChairCar.h"
#include "SecondSitting.h"
#include "AC2Tier.h"
#include "ACFirstClass.h"
#include "FirstClass.h"
#include "AC3Tier.h"
#include "Sleeper.h"

#include <math.h>

#include <vector>
using namespace std;

class Booking
{
private:
    const Station fromStation_;
    const Station toStation_;
    const Date date_;
    const BookingClass &bookingClass_;
    Passenger *passenger_ = NULL;

    static double sBaseFarePerKM;
    static double sACSurcharge;
    static double sLuxuryTaxPercent;

    static int sBookingPNRSerial;

    string bookingMessage_;
    bool bookingStatus_;
    const int fare_;
    const int pnr_;

    virtual int ComputeFare() const;

public:
    Booking(Station fromStation, Station toStation, Date date, const BookingClass &bookingClass);
    ~Booking() {}

    Booking(const Booking &book) = delete;
    Booking& operator=(const Booking &book) = delete;    // copy assignment operator

    static vector<Booking *> sBookings;
    friend ostream &operator<<(ostream &os, const Booking &booking);

};

#endif