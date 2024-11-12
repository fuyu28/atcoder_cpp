#include <bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)
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

    lint n, q;
    cin >> n;
    vector<lint> a(300009);
    rep(i, 0, n) cin >> a.at(i);
    sort(all(a));
    cin >> q;

    rep(i, 0, q) {
        lint ans = 1e10+1;
        lint b;
        cin >> b;
        auto it = lower_bound(all(a), b);
        if (it != end(a)) ans = min(ans, abs(*it - b));
        if (it != begin(a)) ans = min(ans, abs(*prev(it) - b));
        cout << ans << endl;
    }
    return 0;
}