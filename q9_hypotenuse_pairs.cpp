#include <iostream>
#include <cmath>
using namespace std;

int main() {

    for(int i = 1;i<100;i++){
        for(int j=i+1;j<100;j++){
            int hypot = sqrt(pow(i,2) + pow(j, 2));
            if(pow(hypot,2) == (pow(i,2) + pow(j, 2))){
                cout<<"The pair is ("<<i << " , " << j << ")" << " and their hypotenuse is  " << hypot << endl;
            }
        }
    }
    
    return 0;
}
