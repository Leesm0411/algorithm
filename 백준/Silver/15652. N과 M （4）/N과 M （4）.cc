#include <iostream>
using namespace std;

int N, M;
int arr[10];

void dfs(int depth, int root){
    if(depth == M){
        for(int i = 0; i < M; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i = root; i <= N; i++){
        arr[depth] = i;
        dfs(depth + 1, i);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    dfs(0, 1);

    return 0;
}