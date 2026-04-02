#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    vector<int> arr(N);
    for(int i = 0; i < N; i++){
        int A;
        cin >> A;
        arr[i] = A;
    }
    sort(arr.begin(), arr.end());
    int M;
    cin >> M;
    while(M--){
        int num;
        cin >> num;
        if(binary_search(arr.begin(), arr.end(), num)) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
    return 0;
}