#include "line.h"

#include <cmath>


line::line() {}


line::line(double x1, double y1, double x2, double y2) {

p1.setX(x1);

p1.setY(y1);

p2.setX(x2);

p2.setY(y2);

}



line::line(line& l) {

p1.setX(l.p1.getX());

p1.setY(l.p1.getY());

p2.setX(l.p2.getX());

p2.setY(l.p2.getY());

}



void line::SetPoint1(double x1, double y1) {

p1.setX(x1);

p1.setY(y1);

}


void line::SetPoint2(double x2, double y2) {

p2.setX(x2);

p2.setY(y2);

}



void line::SetLine(double x1, double y1, double x2, double y2) {

p1.setX(x1);

p1.setY(y1);

p2.setX(x2);

p2.setY(y2);

}



double line::Distance() {

double d = sqrt(pow(p2.getX() - p1.getX(), 2) + pow(p2.getY() - p1.getY(), 2));

return d;

}


double line::Slope() {

double s = (p2.getY() - p1.getY()) / (p2.getX() - p1.getX());

return s;

}



bool line::operator==(line& l) {

if ((p1.getX() == l.p1.getX()) &&

(p1.getY() == l.p1.getY()) &&

(p2.getX() == l.p2.getX()) &&

(p2.getY() == l.p2.getY()))

return true;


return false;

}



bool line::operator!=(line& l) {


if ((p1.getX() != l.p1.getX()) ||

(p1.getY() != l.p1.getY()) ||

(p2.getX() != l.p2.getX()) ||

(p2.getY() != l.p2.getY()))

return true;

return false;

}

 ostream& operator<<(ostream &out, line& l) {

out << "(" << "(" << l.p1.getX() << "," << l.p1.getY() << ")" << "(" << l.p2.getX() << "," << l.p2.getY() << ")" << ")";

return out;

}


 istream& operator>>(istream &in, line &l) {

double x1, y1, x2, y2;

in >> x1 >> y1 >> x2 >> y2;

l.p1.setX(x1);

l.p1.setY(y1);

l.p2.setX(x2);

l.p2.setY(y2);

return in;

}
