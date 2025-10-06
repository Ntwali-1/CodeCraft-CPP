// Print a character array in reverse using recursion
#include <iostream>
#include <string>

static void printReverse(const char* s) {
    if (s == nullptr || *s == '\0') {
        return;
    }
    printReverse(s + 1);
    std::cout << *s;
}

int main() {
    std::string input;
    if (!(std::cin >> input)) {
        return 0;
    }
    printReverse(input.c_str());
    std::cout << std::endl;
    return 0;
}


