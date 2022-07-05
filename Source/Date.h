/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/

#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Date
{
private:
    typedef unsigned int UINT;
    UINT date_;
    UINT month_;
    UINT year_;

public:
    Date(UINT d, UINT m, UINT y);
    ~Date();
    Date(const Date &dt);            // copy constructor
    Date &operator=(const Date &dt); // copy assignment operator
    bool IsValidDate();
    string Day();
    const string ToString() const;
    friend ostream &operator<<(ostream &os, const Date &dt);


};

#endif