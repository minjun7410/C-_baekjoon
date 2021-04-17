/* 빠른 입출력 문제 */
#include <iostream>
using namespace std;

int boj_15552(){
    /* "ios::sync_with_stdio(false)" 
    보통 C 와 C++ 의 입출력을 syncronize 동기화시켜서 사용한다.
    이 경우 iosream(C++)와 stdio(c)의 버퍼를 모두 사용하기 때문에 딜레이가 발생한다.
    하지만 동기화를 풀어 독립적인 C++의 버퍼가 생성되어 전과 달리 사용하는 버퍼의 수가 줄어들었기 때문에 실행속도가 빨라지게 된다.
    */
    ios::sync_with_stdio(false);
    /* "cin.tie(NULL)"
    기본적으로 cin과 cout은 묶여있고 묶여있는 스트림들은 한 스트림이 다른 스트림에서 각 IO 작업을 진행하기 전에 자동으로 버퍼를 비워줌을 보장합니다.

출처: https://jaimemin.tistory.com/1521 [꾸준함]
    하지만 이 문장을 통해 묶음을 풀어주면 cout이 기본적으로 버퍼에 추가되고 바로 비워지지 않게 되서 빨라지게 된다.
    (출력 명령을 내리거나 버퍼가 가득찼을 때 버퍼를 비우고 출력한다)
    "cin.tie(NULL)"를 사용하고 cout을 바로 출력하고 싶다면 그 즉시 버퍼를 비워줘야함을 의미한다.
    */
    cin.tie(NULL);
    
    
    int T, A, B;
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> A >> B;
        cout << A + B << '\n'; 
    }
    return 0;
}