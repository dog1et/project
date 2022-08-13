#include <iostream>
using namespace std;

int main(){
    int arr1[5] = {1, 3, 2, 5, 4};
    int arr2[5];
    int arr_len = sizeof(arr1)/sizeof(arr1[0]);
    cout <<  arr1 << ' ' <<  arr2  << endl;
    for(int i = 0; i < arr_len; i++){
        cout << "No." << i << " of arr1 is " << arr1[i] << " ";
        arr2[i] = arr1[arr_len - i - 1];
        cout << "No." << arr_len - i - 1 << " of arr1 is " << arr1[arr_len - i - 1] << endl;
    }
    cout << endl;
    for(int i = 0; i < arr_len; i++){
        cout << " arr1: " << arr1[i] << ' ';
        // cout << arr2[i] << endl;
    }

    cout  << endl;

    return 0;

}