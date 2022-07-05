/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/

#include "Booking.h"

double Booking::sBaseFarePerKM = 0.50;
double Booking::sACSurcharge = 50.00;
double Booking::sLuxuryTaxPercent = 25.0;
int Booking::sBookingPNRSerial = 1;

vector<Booking *> Booking::sBookings;

Booking::Booking(Station fromStation, Station toStation, Date date, const BookingClass &bookingClass) : fromStation_(fromStation), toStation_(toStation), date_(date), bookingClass_(bookingClass), fare_(ComputeFare()), pnr_(sBookingPNRSerial)
{
    sBookingPNRSerial++;
    bookingMessage_ = "BOOKING SUCCEEDED";
    bookingStatus_ = true;
    sBookings.push_back(this);
}

int Booking::ComputeFare() const
{
    int dist = Railways::IndianRailways().GetDistance(fromStation_.GetName(), toStation_.GetName());

    double baseFare = dist * sBaseFarePerKM;
    double loadedFare = baseFare * bookingClass_.GetLoadFactor();

    if (bookingClass_.IsAC())
        loadedFare += sACSurcharge;
    if (bookingClass_.IsLuxury())
        loadedFare += (sLuxuryTaxPercent * loadedFare) / 100;

    return static_cast<int>(round(loadedFare));
}

ostream &operator<<(ostream &os, const Booking &booking)
{
    os << booking.bookingMessage_ << "\n";
    os << "PNR Number = " << booking.pnr_ << "\n";
    os << "From Station = " << booking.fromStation_ << "\n";
    os << "To Station = " << booking.toStation_ << "\n";
    os << "Travel Date = " << booking.date_ << "\n";
    os << "Travel Class = " << booking.bookingClass_.GetName() << "\n";
    os << "   :   Mode = " << (booking.bookingClass_.IsSitting() ? "Sitting" : "Sleeping") << "\n";
    os << "   :   Comfort = " << (booking.bookingClass_.IsAC() ? "AC" : "Non-AC") << "\n";
    os << "   :   Bunks = " << booking.bookingClass_.GetNumberOfTiers() << "\n";
    os << "   :   Luxury = " << (booking.bookingClass_.IsLuxury() ? "Yes" : "No") << "\n";
    os << "Fare = " << booking.fare_ << "\n";

    return os;
}