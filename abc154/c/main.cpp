#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int A;
    set<int> num;
    for (int i = 0; i < N; ++i) {
        cin >> A;
        num.insert(A);
    }

    if (num.size() == N) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}