#include <iostream>
using namespace std;

void checkCharacter(char c);

int main() {
    char input;
    
    cout << "Enter a character: ";
    cin >> input;
    
    checkCharacter(input);
    
    return 0;
}

void checkCharacter(char c) {
    if (isdigit(c)) {
        cout << "The character is a digit" << endl;
    } else if (isalpha(c)) {
        cout << "The character is an alphabetic letter" << endl;
    } else {
        cout << "The character is neither a digit nor an alphabetic letter" << endl;
    }
}
