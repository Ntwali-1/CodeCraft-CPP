#include <iostream>
using namespace std;

int selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr [min_index]){
                min_index = j;
            }
        }
        if(min_index!=i){
            swap(arr[i],arr[min_index]);
        }
    }

    return 0;

}

int main (){
    int arr[6] = {60,50,40,30,20,10};
    int n = 6;

    selectionSort(arr,n);

    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }
}
