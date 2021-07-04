#include <iostream>
using namespace std;

int boj_10833(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    int result, school, apples;
    result = 0;
    for(int i = 0; i < N; i++){
        cin >> school >> apples;
        result += apples % school;
    }
    cout << result << '\n';
    return 0;
}