#include <iostream>
#include <string>
using namespace std;

int countSpaces(string str);

int main() {
    string input;
    
    cout << "Enter a string: ";
    getline(cin, input);
    
    int spaceCount = countSpaces(input);
    
    cout << "Number of spaces in the string: " << spaceCount << endl;
    
    return 0;
}

int countSpaces(string str) {
    int count = 0;
    for (char c : str) {
        if (c == ' ') {
            count++;
        }
    }
    return count;
}
