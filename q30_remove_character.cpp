// Remove a specific character from the array and print the result using recursion
#include <iostream>
#include <string>

static void removeCharAndPrint(const char* s, char target) {
    if (s == nullptr || *s == '\0') {
        return;
    }
    if (*s != target) {
        std::cout << *s;
    }
    removeCharAndPrint(s + 1, target);
}

int main() {
    std::string input;
    char target;
    if (!(std::cin >> input)) {
        return 0;
    }
    if (!(std::cin >> target)) {
        return 0;
    }
    removeCharAndPrint(input.c_str(), target);
    std::cout << std::endl;
    return 0;
}


