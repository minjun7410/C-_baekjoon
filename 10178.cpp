#include <iostream>
using namespace std;

int boj_10178(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, pieces, dad;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> pieces >> dad;
        cout << "You get " << pieces/dad << " piece(s) and your dad gets " << pieces % dad << " piece(s).";
        cout << '\n';
    }
    return 0;
}