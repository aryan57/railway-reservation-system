/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/

#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

#include "Date.h"

class Passenger
{

    const string name_;
    const bool isMale_;
    const Date dob_;
    const long long aadhar_no_;
    long long mobile_no_;
    string category_;

public:
    Passenger(string name = "Aryan Agarwal", Date dob = Date(5, 7, 2001), long long aadhar_no = 1234567890, long long mobile_no = 1234567890, string category = "General", bool isMale = true);

    friend ostream &operator<<(ostream &os, const Passenger &p);
};

#endif