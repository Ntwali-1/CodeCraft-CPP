#include <iostream>
using namespace std;

int main() {
    int length, width;
    
    cout << "Enter length of rectangle: ";
    cin >> length;
    
    cout << "Enter width of rectangle: ";
    cin >> width;
    
    int rectPerimeter = 2 * (length + width);
    int rectArea = length * width;
    
    cout << "Area of rectangle: " << rectArea << endl;
    cout << "Perimeter of rectangle: " << rectPerimeter << endl;
    
    return 0;
}


