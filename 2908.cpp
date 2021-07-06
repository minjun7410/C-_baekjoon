/* 기본 연산 문제
a, b = A, B;
이런식의 연산은 A, B의 포인터를 가리키는듯. */

#include <iostream>
#include <cmath>
using namespace std;

int boj_2908(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int A, B, a, b, result;
    cin >> A >> B;
    int A_c = A;
    int B_c = B;
    for(int i = 1; i <= 3; i++){
        a = A % 10;
        b = B % 10;
        A /= 10;
        B /= 10;
        if(a > b){
            result = A_c;
            break;
        }
        else if(a < b){
            result = B_c;
            break;
        }
        else continue;
    }
    for(int i = 2; i >= 0; i--){
        cout << result % 10;
        result /= 10;
    }
    cout << '\n';
    return 0;
}