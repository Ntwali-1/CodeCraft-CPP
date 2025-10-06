#include <iostream>
using namespace std;

void printAscending(int a, int b, int c);

int main() {
    int num1, num2, num3;
    
    cout << "Enter first integer: ";
    cin >> num1;
    
    cout << "Enter second integer: ";
    cin >> num2;
    
    cout << "Enter third integer: ";
    cin >> num3;
    
    printAscending(num1, num2, num3);
    
    return 0;
}

void printAscending(int a, int b, int c) {
    if (a <= b && a <= c) {
        if (b <= c) {
            cout << a << " " << b << " " << c << endl;
        } else {
            cout << a << " " << c << " " << b << endl;
        }
    } else if (b <= a && b <= c) {
        if (a <= c) {
            cout << b << " " << a << " " << c << endl;
        } else {
            cout << b << " " << c << " " << a << endl;
        }
    } else {
        if (a <= b) {
            cout << c << " " << a << " " << b << endl;
        } else {
            cout << c << " " << b << " " << a << endl;
        }
    }
}
