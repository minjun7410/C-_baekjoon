/* 연산, 배열 문제 */
#include <iostream>
#include <vector>
/* 벡터를 이용하는 연습 */
using namespace std;

int boj_1546(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, tmp;
    int max_value = 0;
    double result = 0;
    vector<int> subjects;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        max_value = max(max_value, tmp);
        subjects.push_back(tmp);
    }
    for(int i = 0; i < N; i++){
        result += double(subjects[i]) / max_value * 100;
    }
    cout << result / N << '\n';
    return 0;
}