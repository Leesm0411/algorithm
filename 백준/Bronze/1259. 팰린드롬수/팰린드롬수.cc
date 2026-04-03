#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    while(true){
        int num;
        cin >> num;
        if(num == 0) break;
        string s = to_string(num);
        bool isYes = true;
        for(int i = 0; i < (s.length() / 2); i++){
            if(s[i] != s[s.length() - i - 1]){
                isYes = false;
                break;
            }
        }
        if(isYes) cout << "yes\n";
        else cout << "no\n";
    }
    return 0;
}