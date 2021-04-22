#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    /* input */
    int N, M;
    int number_cards[100001];
    int sample[100001];
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> number_cards[i]; 
    }
    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> sample[i];
    }
    sort(number_cards, number_cards+N);
    
    return 0;
}

int binary_search(int& ) /* pass by reference 로 배열을 전달한다. */