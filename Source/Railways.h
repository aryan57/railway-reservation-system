/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/

#ifndef RAILWAYS_H
#define RAILWAYS_H

// C++ Standard Library Header
#include <vector>
#include <map>
using namespace std;

// Project Headers
#include "Station.h"

class Railways
{
private:
    /*
        Singleton class,thus private constructor & destructor.
        No copy constructor or copy assignment operator
    */
    Railways();
    ~Railways();

    static map<const string, const Station *> sStations;
    static map<pair<const Station *, const Station *>, int> sDistStations;

public:
    /*
        Since the given class is a singleton,
        we have to block its copy constructor
        and copy assignment operator.
    */
    Railways& operator=(const Railways &tempObj) = delete;
    Railways(const Railways &tempObj) = delete;

    static const Railways &IndianRailways();
    int GetDistance(const string &source, const string &destination) const;
    const Station *GetStation(const string &stationName) const;

};

#endif