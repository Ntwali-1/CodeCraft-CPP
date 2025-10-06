#include <iostream>
using namespace std;

void checkNumber(int number) {
    if (number > 0) {
        cout << "The number is positive" << endl;
    } else if (number < 0) {
        cout << "The number is negative" << endl;
    } else {
        cout << "The number is zero" << endl;
    }
}

int main() {
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    checkNumber(number);
    
    return 0;
}


