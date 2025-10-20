#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n < 2) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the position (n): ";
    cin >> n;

    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;

    return 0;
}
