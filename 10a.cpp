#include <iostream>
using namespace std;

double multi(double a, double b) {
    return a * b;
}

int main() {
    double x, y;
    cout << "Enter two numbers to multiply: ";
    cin >> x >> y;
    cout << "The product of " << x << " and " << y << " is " << multi(x, y) << endl;
    return 0;
}
