#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
// cstring 을 익히고 string 끼리 더하는 것을 이용
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
  
    int tmp;
    int sums = 0;
    vector<int> array;
    vector<int> result(8, 0);
    for(int i = 0; i < 8; i++){
        cin >> tmp;
        array.push_back(tmp);
    }
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(i == j) continue;
            else if(array[i] < array[j]){
                result[i] += 1;
            }
        }
    }
    string str = "";
    for(int i = 0; i < 8; i++){
        if(result[i] < 5){
            sums += array[i];
            str = str + i+1;
        }
    }
    cout << sums << '\n';
    cout << str << '\n';
    return 0;
}