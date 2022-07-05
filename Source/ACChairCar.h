/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/
#ifndef AC_CHAIR_CAR_H
#define AC_CHAIR_CAR_H

#include "Tier0.h"
#include <string>
#include <iostream>
using namespace std;

class ACChairCar : public Tier0
{

private:
    static const string sName;
    static const bool sIsAC;
    static const bool sIsSitting;
    static const int sNumberOfTiers;

    static bool sIsLuxury;
    static double sFareLoadFactor;

    ACChairCar() {}
    ~ACChairCar() {}

public:
    /*
        Since the given class is a singleton,
        we have to block its copy constructor
        and copy assignment operator.
    */
    ACChairCar& operator=(const ACChairCar &tempObj) = delete;
    ACChairCar(const ACChairCar &tempObj) = delete;

    /* 
        ACChairCar is a non const singleton
        as we change its sFareLoadFactor
        and sIsLuxury
    */
    static ACChairCar &Type();
    double GetLoadFactor() const;
    string GetName() const;
    bool IsSitting() const;
    bool IsAC() const;
    int GetNumberOfTiers() const;
    bool IsLuxury() const;

    void SetIsLuxury(const bool &newIsLuxury);
    void SetLoadFactor(const double &newLoadFactor);

    friend ostream &operator<<(ostream &os, const ACChairCar &object);

};

#endif