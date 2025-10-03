#include <iostream>
#include <cmath>
using namespace std;

double calculateArea(double radius);
double calculateCircumference(double radius);

int main() {
    double radius;
    
    cout << "Enter radius of circle: ";
    cin >> radius;
    
    double area = calculateArea(radius);
    double circumference = calculateCircumference(radius);
    
    cout << "Area of circle: " << area << endl;
    cout << "Circumference of circle: " << circumference << endl;
    
    return 0;
}

double calculateArea(double radius) {
    const double PI = 3.14159;
    return PI * radius * radius;
}

double calculateCircumference(double radius) {
    const double PI = 3.14159;
    return 2 * PI * radius;
}
