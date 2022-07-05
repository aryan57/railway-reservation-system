/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/
#ifndef BOOKING_CLASS_H
#define BOOKING_CLASS_H

#include <string>
using namespace std;

class BookingClass
{
public:
    virtual double GetLoadFactor() const = 0;
    virtual string GetName() const = 0;
    virtual bool IsSitting() const = 0;
    virtual bool IsAC() const = 0;
    virtual int GetNumberOfTiers() const = 0;
    virtual bool IsLuxury() const = 0;

    friend ostream &operator<<(ostream &os, const BookingClass &object);
};

#endif