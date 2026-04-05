#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    vector<string> board(N);

    for(int i = 0; i < N; i++) cin >> board[i];

    int ans = 64;

    for(int i = 0; i < N - 7; i++){
        for(int j = 0; j < M - 7; j++){
            int cnt1 = 0;
            int cnt2 = 0;
            for(int k = 0; k < 8; k++){
                for(int l = 0; l < 8; l++){
                    if((k + l) % 2 == 0){
                        if(board[i + k][j + l] != 'W') cnt1++;
                        if(board[i + k][j + l] != 'B') cnt2++;
                    }
                    else{
                        if(board[i + k][j + l] != 'B') cnt1++;
                        if(board[i + k][j + l] != 'W') cnt2++;                       
                    }
                }
            }
            ans = min(ans, min(cnt1, cnt2));
        }
    }
    cout << ans << '\n';
    
    return 0;
}