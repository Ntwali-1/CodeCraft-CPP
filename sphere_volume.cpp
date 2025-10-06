#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius, volume;
    const double PI = 3.142;
    
    cout << "Enter radius of sphere: ";
    cin >> radius;
    
    volume = (4/3) * PI * pow(radius, 3);
    
    cout << "Volume of sphere with radius " << radius << " is: " << volume << endl;
    
    return 0;
}
