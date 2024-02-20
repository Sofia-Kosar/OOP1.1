
#include <iostream>
#include "Line.h"
using namespace std;

Line makeLine() {
    Line n;
    if (!n.Read())
        cout << "wrong argument to Init (first)" << endl;
    return n;
}

int main() {
    Line n = makeLine();
    n.Display();
    int x;
    cout << "enter your 'x':";
    cin >> x;
    cout << "result of function:" << n.function(x);

}