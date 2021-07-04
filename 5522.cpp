#include <iostream>
using namespace std;

int boj_5522(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int result, tmp;
    result = 0;
    for(int i = 0; i < 5; i++){
        cin >> tmp;
        result += tmp;
    }
    cout << result << '\n';
    return 0;
}