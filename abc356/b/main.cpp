#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N , M;
    cin >> N >> M;
    vector<int> A(M);
    vector<vector<int>> X(N, vector<int>(M));
    bool ans = true;

    for (auto& v : A) cin >> v;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> X.at(i).at(j);
        }
    }

    vector<int> sums(M, 0);
    for (int j = 0; j < M; ++j) {
        for (int i = 0; i < N; ++i){
            sums.at(j) += X.at(i).at(j);
        }
    }

    for (int j = 0; j < M; ++j) {
        if (A.at(j) > sums.at(j)) ans = false;
    }

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}
