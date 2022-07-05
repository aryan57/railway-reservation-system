/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/

#ifndef SECOND_SITTING_H
#define SECOND_SITTING_H

#include "Tier0.h"
#include <string>
#include <iostream>
using namespace std;

class SecondSitting : public Tier0
{

private:
    static const string sName;
    static const bool sIsAC;
    static const bool sIsSitting;
    static const int sNumberOfTiers;

    static bool sIsLuxury;
    static double sFareLoadFactor;

    SecondSitting() {}
    ~SecondSitting() {}

public:
    /*
        Since the given class is a singleton,
        we have to block its copy constructor
        and copy assignment operator.
    */
    SecondSitting& operator=(const SecondSitting &tempObj) = delete;
    SecondSitting(const SecondSitting &tempObj) = delete;

    /* 
        SecondSitting is a non const singleton
        as we change its sFareLoadFactor
        and sIsLuxury
    */
    static SecondSitting &Type();
    double GetLoadFactor() const;
    string GetName() const;
    bool IsSitting() const;
    bool IsAC() const;
    int GetNumberOfTiers() const;
    bool IsLuxury() const;

    void SetIsLuxury(const bool &newIsLuxury);
    void SetLoadFactor(const double &newLoadFactor);

    friend ostream &operator<<(ostream &os, const SecondSitting &object);

};

#endif