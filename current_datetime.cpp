#include <iostream>
#include <ctime>
using namespace std;

void displayCurrentDateTime() {
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << "Current date and time: " << dt << endl;
}

int main() {
    displayCurrentDateTime();
    return 0;
}


