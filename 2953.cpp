#include <iostream>
#include <vector>
using namespace std;

int boj_2953(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int result = 0;
    int count, tmp, index;
    for(int i = 0; i < 5; i++){
        count = 0;
        for(int j = 0; j < 4; j++){
            cin >> tmp;
            count += tmp;
        }
        if(result < count){
            result = count;
            index = i;
        }
    }
    cout << index+1 << ' ' << result << '\n';
    return 0;
}