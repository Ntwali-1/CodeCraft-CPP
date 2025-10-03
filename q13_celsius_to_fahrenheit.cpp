#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

int main() {
    double celsius;
    
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    
    double fahrenheit = celsiusToFahrenheit(celsius);
    
    cout << celsius << "C = " << fahrenheit << "F" << endl;
    
    return 0;
}


