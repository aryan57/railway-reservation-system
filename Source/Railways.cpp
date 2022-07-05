/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/

// C++ Standard Library Headers
#include <string>
using namespace std;

// Project Headers
#include "Railways.h"

const Railways &Railways::IndianRailways()
{
    static const Railways IndianRailways_;
    return IndianRailways_;
}

map<const string, const Station *> Railways::sStations;
map<pair<const Station *, const Station *>, int> Railways::sDistStations;

Railways::Railways()
{
    sStations["Mumbai"] = new Station("Mumbai");
    sStations["Delhi"] = new Station("Delhi");
    sStations["Bangalore"] = new Station("Bangalore");
    sStations["Kolkata"] = new Station("Kolkata");
    sStations["Chennai"] = new Station("Chennai");

    sDistStations[{sStations["Mumbai"], sStations["Delhi"]}] = 1447;
    sDistStations[{sStations["Delhi"], sStations["Mumbai"]}] = 1447;

    sDistStations[{sStations["Mumbai"], sStations["Bangalore"]}] = 981;
    sDistStations[{sStations["Bangalore"], sStations["Mumbai"]}] = 981;

    sDistStations[{sStations["Mumbai"], sStations["Kolkata"]}] = 2014;
    sDistStations[{sStations["Kolkata"], sStations["Mumbai"]}] = 2014;

    sDistStations[{sStations["Mumbai"], sStations["Chennai"]}] = 1338;
    sDistStations[{sStations["Chennai"], sStations["Mumbai"]}] = 1338;

    sDistStations[{sStations["Delhi"], sStations["Bangalore"]}] = 2150;
    sDistStations[{sStations["Bangalore"], sStations["Delhi"]}] = 2150;

    sDistStations[{sStations["Delhi"], sStations["Kolkata"]}] = 1472;
    sDistStations[{sStations["Kolkata"], sStations["Delhi"]}] = 1472;

    sDistStations[{sStations["Delhi"], sStations["Chennai"]}] = 2180;
    sDistStations[{sStations["Chennai"], sStations["Delhi"]}] = 2180;

    sDistStations[{sStations["Bangalore"], sStations["Kolkata"]}] = 1871;
    sDistStations[{sStations["Kolkata"], sStations["Bangalore"]}] = 1871;

    sDistStations[{sStations["Bangalore"], sStations["Chennai"]}] = 350;
    sDistStations[{sStations["Chennai"], sStations["Bangalore"]}] = 350;

    sDistStations[{sStations["Kolkata"], sStations["Chennai"]}] = 1659;
    sDistStations[{sStations["Chennai"], sStations["Kolkata"]}] = 1659;
}

Railways::~Railways()
{
}

const Station *Railways::GetStation(const string &stationName) const
{
    if (sStations.find(stationName) != sStations.end())
    {
        return sStations[stationName];
    }
    else
    {
        return new Station("_BAD_NODE_");
    }
}

int Railways::GetDistance(const string &source, const string &destination) const
{

    if (sDistStations.find({GetStation(source), GetStation(destination)}) != sDistStations.end())
    {
        return sDistStations[{GetStation(source), GetStation(destination)}];
    }
    else
    {
        // _BAD_DISTANCE_
        return -1; // denote there was info available
    }
}
