/* 반복분 (별찍기) 문제 */
#include <iostream>
using namespace std;

int boj_2441(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i > j){
                cout << ' ';
            }
            else{
                cout << '*';
            }
        }
        cout << '\n';
    }
    return 0;
}