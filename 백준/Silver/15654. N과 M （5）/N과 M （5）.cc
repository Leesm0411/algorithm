#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<int> temp;
vector<int> arr;
bool visited[10];

void dfs(int depth){
    if(depth == M){
        for(int i = 0; i < M; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i = 0; i < N; i++){
        if(visited[i]) continue;

        visited[i] = true;
        arr[depth] = temp[i];
        dfs(depth + 1);
        visited[i] = false;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    temp.resize(N);
    arr.resize(M);
    for(int i = 0; i < N; i++){
        cin >> temp[i];
    }
    sort(temp.begin(), temp.end());
    dfs(0);
}