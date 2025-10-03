#include <iostream>
#include <string>
using namespace std;

int calculateLength(string str);

int main() {
    string input;
    
    cout << "Enter a string: ";
    getline(cin, input);
    
    int length = calculateLength(input);
    
    cout << "Length of string: " << length << endl;
    
    return 0;
}

int calculateLength(string str) {
    int length = 0;
    int index = 0;
    
    while (str[index] != '\0') {
        length++;
        index++;
    }
    
    return length;
}
