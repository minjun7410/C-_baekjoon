#include <iostream>
#include <vector>
using namespace std;
int solution(int A, int B){
    vector<int> number;
    int result = 0;
    for(int i = 1; i < 50; i++){
        for(int j = 0; j < i; j++){
            if(number.size() == B-1){
                for(int k = A-1; k < B; k++){
                    result += number[k];
                }
                return result;
            }
            number.push_back(i);
        }
    }
    return 0;
}
int boj_1292(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int A, B, tmp;
    cin >> A >> B;
    int result = solution(A, B);
    cout << result << '\n';
    return 0;
}