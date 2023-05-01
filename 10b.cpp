#include <iostream>
using namespace std;

double multi(double a, double b) {
    return a * b;
}

double multi(double a, double b, double c, double d = 1.0) {
    return multi(a, b) * multi(c, d);
}

int main() {
    double x, y, z, w;
    cout << "Enter three numbers to multiply: ";
    cin >> x >> y >> z;
    cout << "The product of " << x << ", " << y << ", and " << z << " is " << multi(x, y, z) << endl;

    cout << "Enter four numbers to multiply: ";
    cin >> x >> y >> z >> w;
    cout << "The product of " << x << ", " << y << ", " << z << ", and " << w << " is " << multi(x, y, z, w) << endl;

    return 0;
}
