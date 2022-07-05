/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/
#ifndef AC_2_TIER_H
#define AC_2_TIER_H

#include "Tier2.h"
#include <string>
#include <iostream>
using namespace std;

class AC2Tier : public Tier2
{

private:
    static const string sName;
    static const bool sIsAC;
    static const bool sIsSitting;
    static const int sNumberOfTiers;

    static bool sIsLuxury;
    static double sFareLoadFactor;

    AC2Tier() {}
    ~AC2Tier() {}

public:
    /*
        Since the given class is a singleton,
        we have to block its copy constructor
        and copy assignment operator.
    */
    AC2Tier& operator=(const AC2Tier &tempObj) = delete;
    AC2Tier(const AC2Tier &tempObj) = delete;

    /* 
        AC2Tier is a non const singleton
        as we change its sFareLoadFactor
        and sIsLuxury
    */
    static AC2Tier &Type();

    double GetLoadFactor() const;
    string GetName() const;
    bool IsSitting() const;
    bool IsAC() const;
    int GetNumberOfTiers() const;
    bool IsLuxury() const;

    void SetIsLuxury(const bool &newIsLuxury);
    void SetLoadFactor(const double &newLoadFactor);

    friend ostream &operator<<(ostream &os, const AC2Tier &object);

};

#endif