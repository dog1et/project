#include <iostream>
using namespace std;


int main(){
    int score_table[3][3] = {
        {100, 100, 100},
        {90, 50, 100},
        {60, 70, 80}
    };
    int zhangsan = 0;
    int lisi = 0;
    int wangwu = 0;
    for(int i = 0; i < sizeof(score_table[0]) / sizeof(score_table[0][0]); i++){
        zhangsan = zhangsan + score_table[0][i];
        lisi = lisi + score_table[1][i];
        wangwu = wangwu + score_table[2][i];
    }
    cout << "score of zhangsan is :" << zhangsan << endl;
    cout << "score of lisi is :    " << lisi << endl;
    cout << "score of wangwu is :  " << wangwu << endl;

    return 0;
}