#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int size[6];
    for (int i = 0; i < 6; i++) {
        cin >> size[i];
    }

    int T, P;
    cin >> T >> P;
    int n = 0;

    for (int i = 0; i < 6; i++) {
        n += (size[i] + T - 1) / T;
    }

    int ans1 = N / P;
    int ans2 = N % P;
    cout << n << endl;
    cout << ans1 << " " << ans2 << endl;

    return 0;
}