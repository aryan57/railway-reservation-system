/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/

#include "Passenger.h"

Passenger::Passenger(string name, Date dob, long long aadhar_no, long long mobile_no, string category, bool isMale) : name_(name), aadhar_no_(aadhar_no), mobile_no_(mobile_no), category_(category), isMale_(isMale), dob_(dob) {}

ostream &operator<<(ostream &os, const Passenger &p)
{
    os << "Name : " << p.name_ << "\n";
    os << "DOB : " << p.dob_ << "\n";
    os << "Aadhar No. : " << p.aadhar_no_ << "\n";
    os << "Mobile No. : " << p.mobile_no_ << "\n";
    os << "Category : " << p.category_ << "\n";
    os << "Gender : " << ((p.isMale_) ? "Male" : "Female") << "\n";
    return os;
}