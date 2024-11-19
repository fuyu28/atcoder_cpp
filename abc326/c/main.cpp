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
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    lint n, m;
    cin >> n >> m;
    vector<lint> a(n);
    rep(i, 0, n) cin >> a[i];
    sort(all(a));

    lint ans = 0;
    rep(i, 0, n)
    {
        lint idx = lower_bound(all(a), a.at(i) + m) - begin(a);
        ans = max(ans, idx - i);
    }
    cout << ans << endl;
    return 0;
}