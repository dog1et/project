#include <iostream>
using namespace std;

int main(){
    int arr1[5] = {10, 20, 30, 40, 50};
    cout << "length of arr1: " << sizeof(arr1)/sizeof(arr1[0]) << endl;
    for (int i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++){
        cout << arr1[i] << endl;
    }

    return 0;
}