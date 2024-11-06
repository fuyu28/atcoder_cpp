#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (lint)(x).size()
#define rep(i, x, limit) for (lint i = (lint)x; i < (lint)limit; i++)
#define REP(i, x, limit) for (lint i = (lint)x; i <= (lint)limit; i++)
using lint = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<lint, lint>;
const int dy[4] = {-1,0,1,0};
const int dx[4] = {0,1,0,-1};

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    lint n, k;
    vector<lint> a(100009), r(100009);
    cin >> n >> k;
    REP(i, 1, n) cin >> a[i];

    rep(i, 1, n) {
        if (i == 1) r[i] = 1;
        else r[i] = r[i-1];
        while (r[i] < n && a[r[i]+1] - a[i] <= k) {
            r[i]++;
        }
    }
    lint ans = 0;
    rep(i, 1, n) {
        ans += (r[i] - i);
    }
    cout << ans << endl;
    return 0;
}