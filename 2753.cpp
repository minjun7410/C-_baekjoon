/*기본 연산 문제*/
#include <iostream>
using namespace std;

int boj_2753(){
    int year;
    cin >> year;
    if(((year % 4 == 0)&&(year % 100 != 0))||(year % 400 == 0))
       cout << 1 << '\n';
    else
       cout << 0 << '\n';
    return 0;
}