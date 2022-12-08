#ifndef LINE_H
#define LINE_H
#include "point.h"
#include <iostream>

using namespace std;

class line {

Point p1, p2;

public:

line();

line(double, double, double, double);

line(line& l);

void SetPoint1(double, double);

void SetPoint2(double, double);

void SetLine(double, double, double, double);

bool operator==(line& l);

bool operator!=(line& l);

friend ostream& operator<<(ostream &out, line& l);

friend istream& operator>>(istream &in, line &l);

double Distance();

double Slope();

};

#endif
