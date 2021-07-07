#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int boj_2592(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tmp, sums, max_value;
    sums = 0;
    vector<int> numbers(1001, 0);
    for(int i = 0; i < 10; i++){
        cin >> tmp;
        sums += tmp;
        numbers[tmp] += 1;
    }
    cout << sums / 10 << '\n';
    int max_index = 0;
    for(int i = 0; i < 1001; i++){
        if(numbers[i] > max_index){
            max_value = i;
            max_index = numbers[i];
        }
    }
    cout << max_value << '\n';
    return 0;
}