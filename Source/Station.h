/*
    Name : Aryan Agarwal
    Roll Number : 19CS30005
*/

#ifndef STATION_H
#define STATION_H

#include <string>
#include <iostream>
using namespace std;

class Station
{
private:
    string name_;

public:
    Station(string name);
    ~Station();
    Station(const Station &s);            // copy constructor
    Station &operator=(const Station &s); // copy assignment operator

    string GetName() const;
    int GetDistance(const string &destination) const;
    friend ostream &operator<<(ostream &os, const Station &s);

};

#endif