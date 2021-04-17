/*기본 연산 문제*/
#include <iostream>
using namespace std;

int boj_1330(){
    int a, b;
    cin >> a >> b;
    if(a > b)
        cout << '>' << '\n';
    else if(a == b)
        cout << "==" << '\n';
    else{
        cout << '<' << '\n';
    }
    return 0;
}