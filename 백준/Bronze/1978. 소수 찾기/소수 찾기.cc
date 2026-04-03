#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    int cnt = 0;
    for(int i = 0; i < N; i++){
        bool isPrime = true;
        int num;
        cin >> num;
        if(num == 1) continue;
        for(int j = 2; j < num; j++){
            if(num % j == 0){
                isPrime = false;
                break;
            }      
        }
        if(isPrime == true) cnt++;
    }
    cout << cnt;

    return 0;
}