#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr1(n);
    for (int i = 0; i < n; i++) cin >> arr1[i];

    vector<int> arr2 = arr1;
    sort(arr2.begin(), arr2.end());
    arr2.erase(unique(arr2.begin(), arr2.end()), arr2.end());
    for (int i = 0; i < n; i++) {
        int ans = lower_bound(arr2.begin(), arr2.end(), arr1[i]) - arr2.begin();
        cout << ans << " ";
    }

    return 0;
}