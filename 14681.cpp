/*기본 연산 문제*/
#include <iostream>
using namespace std;

int boj_14681(){
    int x, y;
    cin >> x >> y;
    if(x > 0){
        if(y > 0)
            cout << 1 << '\n';
        else
            cout << 4 << '\n';
    }
    else{
        if(y > 0)
            cout << 2 << '\n';
        else
            cout << 3 << '\n';
    }
    return 0;
}