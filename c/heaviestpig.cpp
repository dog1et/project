#include <iostream>

using namespace std;

int main(){
    int pig_weight_list[] = {300, 350, 200, 400, 250};
    int max_weight = 0;
    for (int i = 0; i < sizeof(pig_weight_list)/sizeof(pig_weight_list[0]); i++){
        if (pig_weight_list[i] > max_weight){
            max_weight = pig_weight_list[i];
        }
    }
    cout << "the max weight is " << max_weight << endl;
    return 0;
}