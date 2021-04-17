/* 반복문 문제 */
#include <iostream>
using namespace std;

int boj_8393(){
    int n, sum;
    sum = 0;
    cin >> n;
    for(int i = 1; i < n+1; i++)
        sum += i;
    cout << sum << '\n';
    return 0;
}