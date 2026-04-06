#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(string a, string b){
    return a < b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    vector<string> arr1(N);
    vector<string> arr2(M);

    for(int i = 0; i < N; i++) cin >> arr1[i];
    for(int i = 0; i < M; i++) cin >> arr2[i];
    sort(arr2.begin(), arr2.end());
    vector<string> ans;
    
    for(int i = 0; i < N; i++){
        if(binary_search(arr2.begin(), arr2.end(), arr1[i]) == true){
            ans.push_back(arr1[i]);
        }
    }

    sort(ans.begin(), ans.end(), comp);
    
    cout << ans.size() << '\n';
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << '\n';
    }

    return 0;
}