/* 반복문 (별찍기) 문제 */

#include <iostream>
using namespace std;

int boj_2523(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    for(int i = 1; i < N; i++){
        for(int j = 0; j < i; j++){
            cout << '*';
        }
        cout << '\n';
    }
    for(int i = 0; i < N; i++){
        cout << '*';
    }
    cout << '\n';
    for(int i = N-1; i > 0; i--){
        for(int j = 0; j < i; j++){
            cout << '*';
        }
        cout << '\n';
    }
    return 0;
}