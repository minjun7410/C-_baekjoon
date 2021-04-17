/* 반복문 문제 */
#include <iostream>
using namespace std;

int boj_10950(){
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        int A, B;
        cin >> A >> B;
        cout << A+B << '\n';
    }
    return 0;
}