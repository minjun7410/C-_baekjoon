/* 비교 연산 문제 */
#include <iostream>
#include <string>
#include <climits>
using namespace std;

string solution(){
    int P, max_value;
    max_value = INT_MIN;
    string max_player;
    cin >> P;
    for(int i = 0; i < P; i++){
        int value;
        string player;
        cin >> value >> player;
        if(value >= max_value){
            max_value = value;
            max_player = player;
        }
    }
    return max_player;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        string result = solution();
        cout << result << '\n';
    }
    return 0;
}

