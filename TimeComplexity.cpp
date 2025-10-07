//Geometric Progression
#include <iostream>

int fun5(int n){
    int i,j,m = 0;
    for(i=1;i<=n;i*=2){
        for(j=0;j<=i;j++){
            m+=1;
        }
    }
    return m;
}

int main (){
    std::cout << "N=5, Number of instructions::" << fun5(5);
    return 0;
}
