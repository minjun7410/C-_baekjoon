/*반복문 (별찍기) 문제 */
#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++){
        for(int j = N-1; j > 0; j--){
            if(i <= j){
                cout << ' ';
            }
            else{
                cout << '*';
            }
        }
        cout << '*';
        for(int j = 1; j < N; j++){
            if(i <= j){
                break;
            }
            else{
                cout << '*';
            }
        }
        cout << '\n';
    }
    return 0;
}