#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i <= (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int h, w, q;
    cin >> h >> w;
    vector<vector<int>> x(h+1, vector<int>(w+1));
    rep1(i, h) rep1(j, w) cin >> x[i][j];
    cin >> q;
    vector<int> a(q), b(q), c(q), d(q);
    rep(i, q) cin >> a[i] >> b[i] >> c[i] >> d[i];
    vector<vector<int>> cum(h+1, vector<int>(w+1, 0));
    rep1(i, h) {
        rep1(j, w) {
            cum[i][j] = cum[i][j-1] + x[i][j];
        }
    }
    rep1(j, w) {
        rep1(i, h) {
            cum[i][j] = cum[i-1][j] + cum[i][j];
        }
    }

    rep(i, q) {
        int ans = cum[c[i]][d[i]] + cum[a[i]-1][b[i]-1] - cum[a[i]-1][d[i]] - cum[c[i]][b[i]-1];
        cout << ans << endl;
    }
    return 0;
}
