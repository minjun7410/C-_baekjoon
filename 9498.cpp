/*기본 연산 문제*/
#include <iostream>
using namespace std;

int boj_9498(){
    int score;
    cin >> score;
    if((score >= 90)&&(score <= 100))
        cout << 'A' << '\n';
    else if((score >= 80)&&(score < 90))
        cout << 'B' << '\n';
    else if((score >= 70)&&(score < 80))
        cout << 'C' << '\n';
    else if((score >= 60)&&(score < 70))
        cout << 'D' << '\n';
    else
        cout << 'F' << '\n';
    return 0;
}