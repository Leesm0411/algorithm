#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    cin >> N >> K;
    int ans;
    int np = 1;
    int kp = 1;
    int nmkp = 1;
    for(int i = 1; i <= N; i++) np *= i;
    for(int i = 1; i <= K; i++) kp *= i;
    for(int i = 1; i <= N - K; i++) nmkp *= i;
    ans = np / (kp * nmkp);
    cout << ans;

    return 0;
}