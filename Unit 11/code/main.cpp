#include "line.h"

int main() {
line a;
a.SetPoint1(2, 8);
a.SetPoint2(5, 11);
line b(2, 8, 5, 11);
line c(b);
line d;
d.SetLine(9,6,4,2);
cout << "line a: " <<a<< endl;

cout << "line b: " << b<< endl;

cout << "line c: " << c << endl;
cout << "line d: " << d << endl;
if (a == b) {

cout << "Line a equals Line b"<<endl;

}

if (c != d) {

cout << "Line c not equals Line d"<<endl;

}
line e;

cout << "Enter line e: ";

cin >> e;

cout << "line e: " << e << endl;


cout << "Length of e: " << e.Distance() << endl;

cout << "Slope of e: " << e.Slope() << endl;




}
