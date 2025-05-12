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
    vector<lint> cnt(n+1, 1);
    vector<lint> pos(n+1, 0);
    lint ans = 0;
    cnt[0] = 0;
    rep(i, 0, n) {
        pos[i+1] = i+1;
    }

    rep(i, 0, q) {
        lint query;
        cin >> query;
        if (query == 1) {
            lint p, h;
            cin >> p >> h;
            if (cnt[pos[p]] == 2) {
                ans -= 1;
            }
            cnt[pos[p]] -= 1;
            pos[p] = h;
            cnt[pos[p]] += 1;
            if (cnt[pos[p]] == 2) {
                ans += 1;
            }
        } else if (query == 2) {
            cout << ans << '\n';
        }
    }
    return 0;
}