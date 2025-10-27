#include <iostream>
using namespace std;

int quickSort(int arr[], int low, int high){
    if(low<high){
        pi = partition(arr,low,high);
        quickSort(arr,low,high);
        quickSort(app,pi+1,high);
    }
}

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low-1;

    for(int j = low; j<=high; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1], arr[high]);
    return i+1;
}

int main() {
    int arr[] = {5,4,6,3,2,1,8};
    partition(arr,0,6);

    return 0;
}
