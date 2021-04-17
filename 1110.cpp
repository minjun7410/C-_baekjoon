/*기본 연산 문제*/
#include <iostream>
using namespace std;

int boj_1110(){
    int N, tmp;
    int count = 0;
    cin >> N;
    
    int a = N % 10;
    int b = N / 10;
    tmp = a * 10 + (a + b) % 10;
    count += 1;
    while(N != tmp){
        a = tmp % 10;
        b = tmp / 10;
        tmp = a * 10 + (a + b) % 10;
        count += 1;
    }
    cout << count << '\n';
    return 0;
    
}