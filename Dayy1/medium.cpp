#include <iostream>
using namespace std;

double calculateArea(double radius) {
    const double PI = 3.14159;
    return PI * radius * radius;
}

int calculateArea(int length, int breadth) {
    return length * breadth;
}
double calculateArea(double base, double height) {
    return 0.5 * base * height;
}

int main() {

    double radius;
    cout << "Enter radius of the circle: ";
    cin >> radius;

    int length, breadth;
    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;

   
    double base, height;
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;

    cout << calculateArea(radius) << endl;
    cout << calculateArea(length, breadth) << endl;
    cout << calculateArea(base, height) << endl;

    return 0;
}
