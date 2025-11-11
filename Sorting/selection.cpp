#include <iostream>
using namespace std;

int selection(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int md = i;
        for(int j = i+1;j<n;j++){
            if(arr[j] < arr[md]){
                md = j;
            }
        }
        if(md != i){
            swap(arr[md], arr[i]);
        }
    }

    return 0;
}

int main(){
    int arr[] = {3,4,5,2};
    int n = 4;

    selection(arr, n);

    for (int i=0;i<n;i++){
        cout << arr[i] << endl;
    }
}
