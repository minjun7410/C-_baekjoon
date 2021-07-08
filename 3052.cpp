#include <iostream>
#include <vector>
using namespace std;

int boj_3052(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tmp;
    int result = 0;
    vector<int> remainder(42, 0);
    for(int i = 0; i < 10; i++){
        cin >> tmp;
        remainder[tmp % 42] += 1;
    }
    for(int i = 0; i < 42; i++){
        if(remainder[i] > 0){
            result += 1;
        }
    }
    cout << result << '\n';
    return 0;
}