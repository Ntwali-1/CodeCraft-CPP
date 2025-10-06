#include <iostream>
using namespace std;

void computeQuotientRemainder(int n1, int n2, int &quotient, int &remainder) {
    quotient = n1 / n2;
    remainder = n1 % n2;
}
int main() {
    int num1, num2, quotient, remainder;
    
    cout << "Enter first number (dividend): ";
    cin >> num1;
    
    cout << "Enter second number (divisor): ";
    cin >> num2;
    
    computeQuotientRemainder(num1, num2, quotient, remainder);
    
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;
    
    return 0;
}


