#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long product = 1;
    
    for (int i = 2; i <= 100; i++) {
        if (isPrime(i)) {
            product *= i;
        }
    }
    
    cout << "Product of all prime numbers between 1 and 100 is: " << product << endl;
    
    return 0;
}
