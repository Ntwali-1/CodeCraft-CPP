// Print a character array recursively: print first char, then recurse on the remainder
#include <iostream>
#include <string>

static void printChars(const char* s) {
    if (s == nullptr || *s == '\0') {
        return;
    }
    std::cout << *s;
    printChars(s + 1);
}

int main() {
    std::string input;
    if (!(std::cin >> input)) {
        return 0;
    }
    printChars(input.c_str());
    std::cout << std::endl;
    return 0;
}


