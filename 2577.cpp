#include <iostream>
#include <vector>
using namespace std;

int boj_2577(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> number(10, 0);
    int A, B, C, tmp;
    cin >> A >> B >> C;
    tmp = A * B * C;
    while(tmp){
        number[tmp % 10] += 1;
        tmp /= 10;
    }
    for(int i = 0; i < 10; i++){
        cout << number[i] << '\n';
    }
    return 0;
}