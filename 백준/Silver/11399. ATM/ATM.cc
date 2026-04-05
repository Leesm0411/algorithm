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

    for(int i = 0; i < N; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());

    int time = 0;
    int sum = 0;
    for(int i = 0; i < N; i++){
        time += arr[i];
        sum += time;
    }
    cout << sum;

    return 0;
}