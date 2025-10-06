// Find the length of a character array using recursion
#include <iostream>
#include <string>

static size_t charArrayLength(const char* s) {
    if (s == nullptr || *s == '\0') {
        return 0u;
    }
    return 1u + charArrayLength(s + 1);
}

int main() {
    std::string input;
    if (!(std::cin >> input)) {
        return 0;
    }
    std::cout << charArrayLength(input.c_str()) << std::endl;
    return 0;
}


