#include <iostream>
using namespace std;

int main () {
    int count = 0;

    for (int i=0;i<10000;i++){
        for (int j=0;j<10000;j++){
            count ++;
        }
    }

    cout << count << endl;
}
