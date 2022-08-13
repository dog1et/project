#include <iostream>
using namespace std;

int swap(int* p1, int* p2){
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    return 0;
}


int main(){
    int a = 10;
    int b = 20;
    int *p1 = &a;
    int *p2 = &b;
    swap(p1, p2);
    cout << a << ' ' << b << endl;
    return 0;
}