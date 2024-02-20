
#include "Line.h"
#include <iostream>
using namespace std;

void Line::setFirst(double A) {
    Line::first = A;
}

void Line::setSecond(double B) {
    Line::second = B;
}

double Line::getFirst() const {
    return this->first;
}
double Line::getSecond() const {
    return this->second;

}

bool Line::Init(double A, double B) {
    if (A == 0) {
        return false;
    }
    else {
        setFirst(A);
        setSecond(B);
    }
}
void Line::Display() const {
    cout << "y = " << getFirst() << " * x + " << getSecond() << endl;
}
bool Line::Read() {
    double x, y;
    cout << "first:";
    cin >> x;
    cout << "second:";
    cin >> y;
    if (!Init(x, y)) {
        cout << "Init returned false" << endl;
        return false;
    }
    return true;
}

double Line::function(double x) const {
    return getFirst() * x + getSecond();
}