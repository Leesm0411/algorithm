#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    vector<long long> dp(101);

    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;
    dp[4] = 2;
    for(int i = 5; i < 101; i++){
        dp[i] = dp[i - 1] + dp[i - 5];
    }

    int N;
    for(int i = 0; i < T; i++){
        cin >> N;
        cout << dp[N - 1] << '\n';
    }

    return 0;
}