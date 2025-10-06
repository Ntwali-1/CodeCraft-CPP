#include <iostream>
using namespace std;

double calculateCubeVolume(double side);

int main() {
    double side;
    
    cout << "Enter side length of cube: ";
    cin >> side;
    
    double volume = calculateCubeVolume(side);
    
    cout << "Volume of cube: " << volume << endl;
    
    return 0;
}

double calculateCubeVolume(double side) {
    return side * side * side;
}
