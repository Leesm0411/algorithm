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
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int M;
    cin >> M;
    while(M--){
        int num;
        cin >> num;
        int cnt = upper_bound(arr.begin(), arr.end(), num) - lower_bound(arr.begin(), arr.end(), num);

        cout << cnt << ' ';
    }
    return 0;
}