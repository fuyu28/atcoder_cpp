#include <bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)
#define sz(x) (lint)(x).size()
#define rep(i, x, y) for (lint i = (lint)x; i < (lint)y; i++)
#define REP(i, x, y) for (lint i = (lint)x; i <= (lint)y; i++)
using lint = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<lint, lint>;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    lint n;
    cin >> n;
    vector<lint> a(n), b(n), c(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];
    rep(i, 0, n) cin >> c[i];
    sort(all(a)), sort(all(b)), sort(all(c));

    lint ans = 0;
    rep(i, 0, n)
    {
        lint idx_a = lower_bound(all(a), b.at(i)) - begin(a);
        lint idx_c = upper_bound(all(c), b.at(i)) - begin(c);
        ans += idx_a * (n - idx_c);
    }
    cout << ans << endl;
    return 0;
}