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
        G[b].push_back(a); // 無向グラフのとき
    }

    vector<lint> dist(n, -1);
    queue<lint> que;
    que.push(0);
    dist[0] = 0;
    while (!que.empty()) {
        lint v = que.front();
        que.pop();
        for (lint nv : G[v]) {
            if (dist[nv] == -1) {
                que.push(nv);
                dist[nv] = dist[v] + 1;
            }
        }
    }
}