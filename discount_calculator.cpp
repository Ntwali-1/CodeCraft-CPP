#include <iostream>
using namespace std;

double dis(int originalPrice, int discountPercentage) {
    double discountAmount = (originalPrice * discountPercentage) / 100.0;
    return originalPrice - discountAmount;
}

int main() {
    int price, discount;
    
    cout << "Enter original price: ";
    cin >> price;
    
    cout << "Enter discount percentage: ";
    cin >> discount;
    
    double finalPrice = dis(price, discount);
    
    cout << "Final price after discount: " << finalPrice << endl;
    
    return 0;
}


