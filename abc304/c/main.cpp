#include <bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)
#define sz(x) (lint)(x).size()
#define rep(i, x, y) for (lint i = (lint)x; i < (lint)y; i++)
#define REP(i, x, y) for (lint i = (lint)x; i <= (lint)y; i++)
using lint = long long;
using ulint = unsigned long long;
using pll = pair<lint, lint>;
using Graph = vector<vector<lint>>;
const int dy[4] = {-1,0,1,0};
const int dx[4] = {0,1,0,-1};
struct Init { Init() { ios::sync_with_stdio(0); cin.tie(0); } }init;

int main() {
    lint n, d;
    cin >> n >> d;
    vector<lint> x(n), y(n);
    rep(i, 0, n) cin >> x[i] >> y[i];

    vector<bool> seen(n, false);
    auto dfs = [&](auto f, lint v)->void {
        seen[v] = true;
        rep(nv, 0, n) {
            if (seen[nv]) continue;
            if (sqrt(pow(x[v] - x[nv], 2) + pow(y[v] - y[nv], 2)) <= d) f(f, nv);
        }
    };
    dfs(dfs, 0);
    for (auto s : seen) {
        cout << (s ? "Yes" : "No") << "\n";
    }
}