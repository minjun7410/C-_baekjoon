#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int boj_10815(){
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
    cout << number_cards << '\n';
    return 0;
}