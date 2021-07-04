#include <iostream>
using namespace std;

int boj_2010(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, result, multitap;
    result = 1;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> multitap;
        result += multitap -1;
    }
    cout << result << '\n';
    return 0;
}