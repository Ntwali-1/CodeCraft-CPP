#include <iostream>
using namespace std;

int main () {
    int arr[6] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);
    int count = 0;
    bool check = 0;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            count++;
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        if(check == 0){
            break;
        }
        cout << check << endl;
    }
    cout << count << endl;


    for(int i=0;i<5;i++){
        cout << arr[i] << endl;
    }

    return 0;
}
