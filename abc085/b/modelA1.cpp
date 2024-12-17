#include <bits/stdc++.h>
using namespace std;

//バケット法
int main() {
    int N;
    cin >> N;
    vector<int> d(N);
    for (int i = 0; i < N; ++i) cin >> d.at(i);

    vector<int> num(110, 0);
    for (int i = 0; i < N; ++i) {
        num.at(d.at(i))++;
    }

    int res = 0;
    for (int i = 1; i <= 100; ++i) {
        if (num.at(i)) {
            ++res;
        }
    }
    cout << res << endl;
    return 0;
}