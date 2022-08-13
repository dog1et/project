#include <iostream>
using namespace std;

int main(){
    int arr[3][2] = {
        {2,3},
        {1,0},
        {4,1}
    };
    int raw = sizeof(arr) / sizeof(arr[0]);
    int col = sizeof(arr[0]) / sizeof(arr[0][0]);

    for(int i = 0; i < raw; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << &arr[0] << endl;
    cout << arr[0] + 1 << endl;
    cout << &arr[1][0] << endl;
    cout << &arr[0][0] << endl;

    return 0;
}