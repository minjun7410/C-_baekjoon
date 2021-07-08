#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int boj_2711(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T, count;
    string str;
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> count >> str;
        for(int j = 0; j < str.length(); j++){
            if(j == count-1) continue;
            cout << str[j];
        }
        cout << '\n';
    }
    return 0;
}
