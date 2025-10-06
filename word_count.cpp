#include <iostream>
#include <string>
using namespace std;

void wordCount(string str);

int main() {
    string input;
    
    cout << "Enter a string: ";
    getline(cin, input);
    
    wordCount(input);
    
    return 0;
}

void wordCount(string str) {
    int charWithSpaces = str.length();
    int charWithoutSpaces = 0;
    int wordCount = 0;
    bool inWord = false;
    
    for (char c : str) {
        if (c != ' ') {
            charWithoutSpaces++;
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    
    cout << "Number of characters without spaces: " << charWithoutSpaces << endl;
    cout << "Number of characters with spaces: " << charWithSpaces << endl;
    cout << "Number of words: " << wordCount << endl;
}
