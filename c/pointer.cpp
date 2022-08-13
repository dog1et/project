#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    cout << (int)(&arr +1) << " " << (int)(arr+1) <<  endl;
    
    cout << (int)&arr  << ' ' << (int)arr <<  endl;
    int  **p = (int *)&arr;
    cout << (int)p << endl;
    return 0;
}