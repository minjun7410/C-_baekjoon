#include <iostream>
using namespace std;

int boj_1408(){
    char clone;
    int result, hours, minutes, seconds, hours_s, minutes_s, seconds_s;
    cin >> hours >> clone >> minutes >> clone >> seconds;
    cin >> hours_s >> clone >> minutes_s >> clone >> seconds_s;
    int present = seconds + minutes * 60 + hours * 60 * 60;
    int start = seconds_s + minutes_s * 60 + hours_s * 60 * 60;
    if(present > start){
        result = start + 24 * 60 * 60 - present;
    }
    else{
        result = start - present;
    }
    int results[3];
    results[0] = result / (60 * 60);
    result %= 60 * 60;
    results[1] = result / 60;
    result %= 60;
    results[2] = result;
    for(int i = 0; i < 3; i++){
        if (results[i] < 10){
            cout << '0' << results[i];
        }
        else{
            cout << results[i];
        }
        if(i != 2){
            cout << ':';
        }
    }
    cout << '\n';
    return 0;
}