#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    vector<int> A(100009), L(100009) ,R(100009);
    vector<int> S(100009);

    //入力
    cin >> N;
    for (int i = 1; i <= N; ++i) cin >> A.at(i);
    cin >> Q;
    for (int j = 1; j <= Q; ++j) cin >> L.at(j) >> R.at(j);

    //累積和の計算
    S.at(0) = 0;
    for (int i = 1; i <= N; ++i) S.at(i) = S.at(i - 1) + A.at(i);

    //出力
    for (int j = 1; j <= Q; ++j) {
        if (S.at(R.at(j)) - S.at(L.at(j) - 1) == 0) cout << "draw" << endl;
        //if (S.at(R.at(j)) - S.at(L.at(j) - 1) > ((R.at(j) - L.at(j) + 1) / 2 + 1))
    }
    return 0;
}