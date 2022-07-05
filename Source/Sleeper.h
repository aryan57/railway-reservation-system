/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/

#ifndef SLEEPER_H
#define SLEEPER_H

#include "Tier3.h"
#include <string>
#include <iostream>
using namespace std;

class Sleeper : public Tier3
{

private:
    static const string sName;
    static const bool sIsAC;
    static const bool sIsSitting;
    static const int sNumberOfTiers;

    static bool sIsLuxury;
    static double sFareLoadFactor;

    Sleeper() {}
    ~Sleeper() {}

public:
    /*
        Since the given class is a singleton,
        we have to block its copy constructor
        and copy assignment operator.
    */
    Sleeper& operator=(const Sleeper &tempObj) = delete;
    Sleeper(const Sleeper &tempObj) = delete;

    /* 
        Sleeper is a non const singleton
        as we change its sFareLoadFactor
        and sIsLuxury
    */
    static Sleeper &Type();
    double GetLoadFactor() const;
    string GetName() const;
    bool IsSitting() const;
    bool IsAC() const;
    int GetNumberOfTiers() const;
    bool IsLuxury() const;

    void SetIsLuxury(const bool &newIsLuxury);
    void SetLoadFactor(const double &newLoadFactor);

    friend ostream &operator<<(ostream &os, const Sleeper &object);

};

#endif