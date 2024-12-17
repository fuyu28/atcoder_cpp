#include <bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)
#define sz(x) (lint)(x).size()
#define rep(i, x, y) for (lint i = (lint)x; i < (lint)y; i++)
#define REP(i, x, y) for (lint i = (lint)x; i <= (lint)y; i++)
using lint = long long;
using ulint = unsigned long long;
using pii = pair<int, int>;
using pll = pair<lint, lint>;
const int dy[4] = {-1,0,1,0};
const int dx[4] = {0,1,0,-1};
struct Init { Init() { ios::sync_with_stdio(0); cin.tie(0); } }init;

int main() {
    lint n, m, q;
    cin >> n >> m >> q;
    vector<vector<lint>> cond(q, vector<lint>(4));
    rep(i, 0, q) {
        cin >> cond[i][0] >> cond[i][1] >> cond[i][2] >> cond[i][3];
        cond[i][0]--; cond[i][1]--;
    }

    lint ans = 0;
    auto rec = [&](auto f, vector<lint> a, lint k)->void {
        if (k == n) {
            lint d = 0;
            rep(i, 0, q) {
                auto con = cond[i];
                if (a[con[1]] - a[con[0]] == con[2]) d += con[3];
            }
            ans = max(ans, d);
            return;
        }
        REP(i, a[k-1], m) {
            a.push_back(i);
            f(f, a, k+1);
            a.pop_back();
        }
    };
    REP(i, 1, m) {
        rec(rec, {i}, 1);
    }
    cout << ans << endl;
    return 0;
}