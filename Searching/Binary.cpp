#include <iostream>
using namespace std;

int binary(int arr[], int n, int key){
    int start = 0;
    int last = n-1;

    while(start <= last){
        int mid = (start+last)/2;
        if(arr[mid] == key){
            return mid;
        }
        if(key < arr[mid]){
            last = mid -1;
        }
        if(key > arr[mid]){
            start = mid + 1;
        }
    }
    return -1;
}

int main() {
    int a[] = {10, 11, 12, 13, 14, 15};
    int n = 6;
    int key = 13;

    int result = binary(a, n, key);

    if(result != -1)
        cout << key << " found at index " << result << endl;
    else
        cout << key << " not found" << endl;

    return 0;
}
