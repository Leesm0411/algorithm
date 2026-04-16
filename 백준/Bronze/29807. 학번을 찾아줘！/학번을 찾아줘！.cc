#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    vector<int> arr(5);
    for(int i = 0; i < T; i++){
        int s;
        cin >> s;
        arr[i] = s;
    }
    int f = 0;
    int s = 0;
    int t = 0;
    if(arr[0] > arr[2]) f = (arr[0] - arr[2]) * 508;
    else f = (arr[2] - arr[0]) * 108;
    if(arr[1] > arr[3]) s = (arr[1] - arr[3]) * 212;
    else s = (arr[3] - arr[1]) * 305;
    if(arr[4] > 0) t = arr[4] * 707;
    else t = 0;
    cout << (f + s + t) * 4763;

    return 0;
}