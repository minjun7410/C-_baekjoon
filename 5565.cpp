#include <iostream>
using namespace std;

int boj_5565(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int full_price, prices;
    cin >> full_price;
    for(int i = 0; i < 9; i++){
        cin >> prices;
        full_price -= prices;
    }
    cout << full_price << '\n';
    return 0;
}