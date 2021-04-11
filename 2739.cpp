/* 일반 입출력, 사칙연산 문제 */

#include <iostream>
#include <stdio.h>

using namespace std;

int boj_2739(){
    int target;
    cin >> target;
    for(int i = 1; i < 10; i++){
        cout << target << " * " << i << " = " << target * i << '\n';
    }
    return 0;
}