#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {
    for (int i=2;i<100;i++){
        for(int j=i;j<100;j++){
            double hyp = sqrt(pow(i,2) + pow(j,2));
            if(hyp == floor(hyp)){
                cout << i << " " << j << endl;
            }
        }
    }


    return 0;
}
