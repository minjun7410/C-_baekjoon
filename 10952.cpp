/* 사칙 연산 문제 */
#include <iostream>
using namespace std;

int boj_10952(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    while(a + b != 0){
        cout << a + b << '\n';
        cin >> a >> b;
    }
    return 0;
}