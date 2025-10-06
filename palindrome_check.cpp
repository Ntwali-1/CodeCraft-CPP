#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string str);

int main() {
    string input;
    
    cout << "Enter a string: ";
    getline(cin, input);
    
    if (isPalindrome(input)) {
        cout << "The string is a palindrome" << endl;
    } else {
        cout << "The string is not a palindrome" << endl;
    }
    
    return 0;
}

bool isPalindrome(string str) {
    string cleaned = "";
    for (char c : str) {
        if (isalpha(c)) {
            cleaned += tolower(c);
        }
    }
    
    string reversed = cleaned;
    reverse(reversed.begin(), reversed.end());
    
    return cleaned == reversed;
}
