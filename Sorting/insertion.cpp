#include <iostream>
using namespace std;

int insertionSort(int a[],int n){
    for(int i=1;i<n-1;i++){
        int key = a[i];
        int j = i-1;

        while(j>0 && a[j]>key){
            a[j+1] = a[j];
            j=j-1;
        }
        a[j+1] = key;
    }
    return 0;
}

int main (){
    int arr[6] = {60,50,40,30,20,10};
    int n = 6;

    insertionSort(arr,n);

    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }
}
