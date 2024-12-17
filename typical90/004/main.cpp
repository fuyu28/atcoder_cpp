#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int H, W;
    cin >> H >> W;
    vector<vector<int>> A(H, vector<int>(W));
    rep(i, H) rep(j, W) cin >> A[i][j];
    int ans;

    vector<int> row_sum(H, 0);
    vector<int> col_sum(W, 0);

    rep(i, H) rep(j, W) row_sum[i] += A[i][j];
    rep(i, W) rep(j, H) col_sum[i] += A[j][i];

    rep(i, H) rep(j, W) {
        ans = row_sum[i] + col_sum[j] - A[i][j];
        cout << ans << " \n"[j == W - 1];
    }

    return 0;
}