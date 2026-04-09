#include <iostream>
using namespace std;

int main(){
    int f, s;
    while(true){
        cin >> f >> s;
        if(f == 0 && s == 0) break;
        if(f > s) cout << "Yes" << '\n';
        else cout << "No" << '\n';
    }
    return 0;
}