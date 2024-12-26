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
    lint n, m;
    cin >> n >> m;
    Graph G(n);
    rep(i, 0, m) {
        lint a, b;
        cin >> a >> b;
        a--, b--;
        G[a].push_back(b);
    }
    vector<bool> seen(n, false);

    auto dfs = [&](auto f, lint v)->void {
        seen[v] = true;
        for (auto nv : G[v]) {
            if (seen[nv]) continue;
            f(f, nv);
        }
    };
    vector<bool> seen(n, false);
    dfs(dfs, 0);
}