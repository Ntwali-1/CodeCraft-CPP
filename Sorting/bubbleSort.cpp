#include <iostream>
using namespace std;

int bubble(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    return 0;
}

int main(){
    int arr[] = {3,4,5,2};
    int n = 4;

    bubble(arr, n);

    for (int i=0;i<n;i++){
        cout << arr[i] << endl;
    }
}
