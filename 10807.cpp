#include <iostream>
#include <vector>

using namespace std;

int boj_10807(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, v, tmp;
    vector<int> array;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        array.push_back(tmp);
    }
    cin >> v;
    tmp = 0;
    for(int i = 0; i < N; i++){
        if(array[i] == v){
            tmp += 1;
        }
    }
    cout << tmp << '\n';
    return 0;
}