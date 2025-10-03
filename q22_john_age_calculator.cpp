#include <iostream>
using namespace std;

double calculateAgeInYears(long long seconds);

int main() {
    long long seconds = 1000000000;
    
    double years = calculateAgeInYears(seconds);
    
    cout << "John is " << seconds << " seconds old" << endl;
    cout << "John is " << years << " years old" << endl;
    
    return 0;
}

double calculateAgeInYears(long long seconds) {
    const int SECONDS_PER_MINUTE = 60;
    const int MINUTES_PER_HOUR = 60;
    const int HOURS_PER_DAY = 24;
    const int DAYS_PER_YEAR = 365;
    
    double years = (double)seconds / (SECONDS_PER_MINUTE * MINUTES_PER_HOUR * HOURS_PER_DAY * DAYS_PER_YEAR);
    return years;
}
