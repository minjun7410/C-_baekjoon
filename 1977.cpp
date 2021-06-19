#include <iostream>
using namespace std;

int boj_1977(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int M, N;
    int result = 0, sum = 0;
    cin >> M >> N;
    for(int i = 1; i <= 100; i++){
        int tmp = i*i;
        if(tmp < M) continue;
        else if(tmp <= N){
            if(!result){
                result = tmp;
            }
            sum += tmp;
        }
        else break;
    }
    if (!result){
        cout << -1 << '\n';
    }
    else{
        cout << sum << '\n' << result << '\n';
    }
    return 0;
}