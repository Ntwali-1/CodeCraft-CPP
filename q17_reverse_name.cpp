#include <iostream>
#include <string>
using namespace std;

void printReverseName(string firstName, string lastName) {
    cout << "Name in reverse is: " << lastName << " " << firstName << endl;
}

int main() {
    string firstName, lastName;
    
    cout << "Input First Name: ";
    cin >> firstName;
    
    cout << "Input Last Name: ";
    cin >> lastName;
    
    printReverseName(firstName, lastName);
    
    return 0;
}

