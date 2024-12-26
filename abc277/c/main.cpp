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
    lint n;
    cin >> n;
    map<lint, set<lint>> G;
    rep(i, 0, n) {
        lint a, b;
        cin >> a >> b;
        G[a].insert(b);
        G[b].insert(a);
    }

    set<lint> visited;
    lint max_floor = 1;
    auto dfs = [&](auto f, lint v)->void {
        visited.insert(v);
        max_floor = max(max_floor, v);
        for (lint nv : G[v]) {
            if (visited.find(nv) == visited.end()) {
                f(f, nv);
            }
        }
    };
    dfs(dfs, 1);
    lint ans = max_floor;
    cout << ans << "\n";
}