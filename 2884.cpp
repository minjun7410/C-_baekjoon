/*기본 연산 문제*/
#include <iostream>
using namespace std;

int boj_2884(){
    int H, M;
    cin >> H >> M;
    M -= 45;
    if(M < 0){
        M += 60;
        H -= 1;
        if(H < 0){
            H += 24;
        }
    }
    cout << H << ' ' << M << '\n';
    return 0;
    /* 더 나은 풀이 방법 (boj akane)
    m += h*60 + 1395;
	m %= 1440;
	printf("%d %d", m / 60, m%60);
    */
}