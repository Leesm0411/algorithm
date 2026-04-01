#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 0;
    int num = 666;

    while (true) {
        int t = num;
        bool ox = false;
        while (t >= 100) {
            if (t % 1000 == 666) {
                ox = true;
                break;
            }
            t /= 10;
        }
        if (ox) cnt++;
        if (cnt == N) {
            cout << num << "\n";
            break;
        }
        num++;
    }
    return 0;
}