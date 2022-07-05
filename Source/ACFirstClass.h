/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/

#ifndef AC_FIRST_CLASS_H
#define AC_FIRST_CLASS_H

#include "Tier2.h"
#include <string>
#include <iostream>
using namespace std;

class ACFirstClass : public Tier2
{

private:
    static const string sName;
    static const bool sIsAC;
    static const bool sIsSitting;
    static const int sNumberOfTiers;

    static bool sIsLuxury;
    static double sFareLoadFactor;

    ACFirstClass() {}
    ~ACFirstClass() {}

public:
    /*
        Since the given class is a singleton,
        we have to block its copy constructor
        and copy assignment operator.
    */
    ACFirstClass& operator=(const ACFirstClass &tempObj) = delete;
    ACFirstClass(const ACFirstClass &tempObj) = delete;

    /* 
        ACFirstClass is a non const singleton
        as we change its sFareLoadFactor
        and sIsLuxury
    */
    static ACFirstClass &Type();
    double GetLoadFactor() const;
    string GetName() const;
    bool IsSitting() const;
    bool IsAC() const;
    int GetNumberOfTiers() const;
    bool IsLuxury() const;

    void SetIsLuxury(const bool &newIsLuxury);
    void SetLoadFactor(const double &newLoadFactor);

    friend ostream &operator<<(ostream &os, const ACFirstClass &object);

};

#endif