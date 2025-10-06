// Replace a specific character with another and print using recursion
#include <iostream>
#include <string>

static void replaceCharAndPrint(const char* s, char target, char replacement) {
    if (s == nullptr || *s == '\0') {
        return;
    }
    std::cout << ((*s == target) ? replacement : *s);
    replaceCharAndPrint(s + 1, target, replacement);
}

int main() {
    std::string input;
    char target, replacement;
    if (!(std::cin >> input)) {
        return 0;
    }
    if (!(std::cin >> target >> replacement)) {
        return 0;
    }
    replaceCharAndPrint(input.c_str(), target, replacement);
    std::cout << std::endl;
    return 0;
}


