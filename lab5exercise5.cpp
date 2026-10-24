#include <iostream>
using namespace std;

double square(double s) { return s * s; }
double rectangle(double l, double w) { return l * w; }
double triangle(double b, double h) { return 0.5 * b * h; }

int main() {
    int choice = 0;
    double a, b;

    while (choice != 4) {
        cout << "\nPlease select the area of the shape to calculate" << endl;
        cout << "1. Square" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Quit Program" << endl;
        cout << "Enter selection: ";
        cin >> choice;

        if (cin.fail() || choice < 1 || choice > 4) {
            cin.clear();
            cin.ignore();
            cout << "Invalid input. Please enter a valid choice (1-4)." << endl;
            choice = 0;
            continue;
        }

        if (choice == 1) {
            cout << "Enter side: ";
            cin >> a;
            cout << "Area = " << square(a) << endl;
        }
        else if (choice == 2) {
            cout << "Enter length and width: ";
            cin >> a >> b;
            cout << "Area = " << rectangle(a, b) << endl;
        }
        else if (choice == 3) {
            cout << "Enter base and height: ";
            cin >> a >> b;
            cout << "Area = " << triangle(a, b) << endl;
        }
        else if (choice == 4) {
            cout << "Program terminated." << endl;
        }
    }

    return 0;
}
