#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(int a, int b){
    return a < b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M;
    cin >> M;
    vector<int> S;
    for(int i = 0; i < M; i++){
        string s;
        int n;
        cin >> s;
        if(s == "add" || s == "remove" || s == "check" || s == "toggle"){
            cin >> n;
        }
        sort(S.begin(), S.end(), comp);
        if(s == "add"){
            if(binary_search(S.begin(), S.end(), n) == false){
                S.push_back(n);
            }
        }
        if(s == "remove"){
            if(binary_search(S.begin(), S.end(), n) == true){
                for(int j = 0; j < S.size(); j++){
                    if(S[j] == n) S.erase(S.begin() + j);
                }
            }
        }
        if(s == "check"){
            if(binary_search(S.begin(), S.end(), n) == true) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        if(s == "toggle"){
            if(binary_search(S.begin(), S.end(), n) == true){
                for(int j = 0; j < S.size(); j++){
                    if(S[j] == n) S.erase(S.begin() + j);
                }
            }
            else S.push_back(n);
        }
        if(s == "all"){
            S.clear();
            for(int k = 1; k <= 20; k++){
                S.push_back(k);
            }
        }
        if(s == "empty"){
            S.clear();
        }
    }

    return 0;
}