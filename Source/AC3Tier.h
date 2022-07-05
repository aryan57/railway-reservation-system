/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/

#ifndef AC_3_TIER_H
#define AC_3_TIER_H

#include "Tier3.h"
#include <string>
#include <iostream>
using namespace std;

class AC3Tier : public Tier3
{

private:
    static const string sName;
    static const bool sIsAC;
    static const bool sIsSitting;
    static const int sNumberOfTiers;

    static bool sIsLuxury;
    static double sFareLoadFactor;

    AC3Tier() {}
    ~AC3Tier() {}

public:

    /*
        Since the given class is a singleton,
        we have to block its copy constructor
        and copy assignment operator.
    */
    AC3Tier& operator=(const AC3Tier &tempObj) = delete;
    AC3Tier(const AC3Tier &tempObj) = delete;

    /* 
        AC3Tier is a non const singleton
        as we change its sFareLoadFactor
        and sIsLuxury
    */
    static AC3Tier &Type();
    double GetLoadFactor() const;
    string GetName() const;
    bool IsSitting() const;
    bool IsAC() const;
    int GetNumberOfTiers() const;
    bool IsLuxury() const;

    void SetIsLuxury(const bool &newIsLuxury);
    void SetLoadFactor(const double &newLoadFactor);

    friend ostream &operator<<(ostream &os, const AC3Tier &object);

};

#endif