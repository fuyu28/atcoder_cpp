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
    lint n, q;
    cin >> n >> q;
    set<pll> nest; // first: name, second: position
    rep(i, 0, n) {
        nest.insert({i+1, i+1});
    }

    rep(i, 0, q) {
        lint query;
        cin >> query;
        if (query == 1) {
            lint p, h;
            cin >> p >> h;
            auto it = nest.lower_bound({p, 0});
            if (it != nest.end() && it->first == p) {
                nest.erase(it);
            }
            nest.insert({p, h});
        } else if (query == 2) {
            vector<lint> bucket(n+1, 0);
            lint cnt = 0;
            for (auto [l, r] : nest) {
                bucket[r]++;
            }
            for (auto x : bucket) {
                if (x > 1) {
                    cnt++;
                }
            }
            cout << cnt << '\n';
        }
    }
    return 0;
}