#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, Q;
    vector<vector<int>> X(1509, vector<int>(1509)), Z(1509, vector<int>(1509));
    vector<int> A(100009), B(100009), C(100009), D(100009);

    //入力
    cin >> H >> W;
    for (int i = 1; i <= H; ++i) {
        for (int j = 1; j <= W; ++j) {
            cin >> X.at(i).at(j);
            Z.at(i).at(j) = 0;
        }
    }
    cin >> Q;
    for (int i = 1; i <= Q; ++i) cin >> A.at(i) >> B.at(i) >> C.at(i) >> D.at(i);

    //横方向の累積和の計算
    for (int i = 1; i <= H; ++i) {
        for (int j = 1; j <= W; ++j) Z.at(i).at(j) = Z.at(i).at(j - 1) + X.at(i).at(j);
    }

    //縦方向の累積和の計算
    for (int i = 1; i <= H; ++i) {
        for (int j = 1; j <= W; ++j) Z.at(i).at(j) += Z.at(i - 1).at(j); 
    }

    //出力
    for (int i = 1; i <= Q; ++i) {
        cout << Z.at(C.at(i)).at(D.at(i)) + Z.at(A.at(i) - 1).at(B.at(i) - 1) - Z.at(A.at(i) - 1).at(D.at(i)) - Z.at(C.at(i)).at(B.at(i) - 1) << endl;
    }
    
    return 0;
}