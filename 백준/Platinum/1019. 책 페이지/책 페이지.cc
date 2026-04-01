#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    cin >> N;
    int cnt[10] = {0};
    int front, now, back;

    for(int i = 1; N >= i; i *= 10){
        front = N / (i * 10); // 12345 12
        now = N / i % 10; // 12345 3
        back = N % i; // 12345 45

        for(int j = 0; j < 10; j++){
            cnt[j] += front * i; // 자릿수 앞 * i
            if(j < now) cnt[j] += i; // 0~9 00~99 ...
            else if(j == now) cnt[j] += back + 1; //12345 3 00~45
        }
        cnt[0] -= i; //1자리 -1 2자리 -10 3자리 -100 
    } 
    for(int i = 0; i < 10; i++){
        cout << cnt[i] << ' ';
    }

    return 0;
}