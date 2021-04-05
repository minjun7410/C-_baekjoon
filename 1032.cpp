#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int boj_1032(){
    int N;
    string s[51];
    cin >> N;
    for(int i = 0; i < N; i++) cin >> s[i];
    string tmp = s[0];
    int str_len = tmp.length();
    for(int i = 1; i < N; i++){
        for(int j = 0; j < str_len; j++){
            if(tmp[j] == '?') continue;
            else if(tmp[j] != s[i][j]){
                tmp[j] = '?';
            }
        }
    }
    cout << tmp << '\n';
    return 0;
}