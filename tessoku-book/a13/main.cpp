#include <bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)
#define sz(x) (lint)(x).size()
#define rep(i, x, y) for (lint i = (lint)x; i < (lint)y; i++)
#define REP(i, x, y) for (lint i = (lint)x; i <= (lint)y; i++)
using lint = long long;
using ulint = unsigned long long;
using pii = pair<int, int>;
using pll = pair<lint, lint>;
const int dy[4] = {-1,0,1,0};
const int dx[4] = {0,1,0,-1};
struct Init { Init() { ios::sync_with_stdio(0); cin.tie(0); } }init;

int main() {
    lint n, k;
    cin >> n >> k;
    vector<lint> a(n), r(n);
    rep(i, 0, n) cin >> a[i];
    sort(all(a));

    rep(i, 0, n-1) {
        if (i == 0) r[i] = 0;
        else r[i] = r[i-1];
        while (r[i] < n && a[r[i]+1] - a[i] <= k) {
            r[i]++;
        }
    }
    lint ans = 0;
    rep(i, 0, n-1) ans += (r[i] - i);
    cout << ans << endl;
    return 0;
}