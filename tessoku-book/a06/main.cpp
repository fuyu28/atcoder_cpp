#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> A(10009);
    vector<int> L(10009), R(10009);
    for (int i = 1; i <= N; ++i) cin >> A.at(i);
    for (int i = 1; i <= Q; ++i) cin >> L.at(i) >> R.at(i);

    vector<int> S(10009);
    S.at(0) = 0;
    for (int i = 1; i <= N; ++i) S.at(i) = S.at(i - 1) + A.at(i);

    for (int i = 1; i <= Q; ++i) {
        cout << S.at(R.at(i)) - S.at(L.at(i) - 1) << endl;
    }
    return 0;
}