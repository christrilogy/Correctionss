#include <iostream>
using namespace std;

// Function to convert inches to centimeters
double inchesToCentimeters(double inches) {
    const double CM_PER_INCH = 2.54;
    double cm = inches * CM_PER_INCH;
    return cm;
}

int main() {
    double inches;

    // Prompt the user for measurements
    cout << "Enter measurements in inches, one per line." << endl;
    cout << "Enter -1 to stop." << endl;

    // Input loop
    while (true) {
        // Get the next measurement in inches
        cin >> inches;
        if (inches == -1) {
            // End of input sentinel
            break;
        }
        // Convert to centimeters
        double cm = inchesToCentimeters(inches);

        // Output the result
        cout << inches << " inches = " << cm << " cm" << endl;
    }
    return 0;
}
