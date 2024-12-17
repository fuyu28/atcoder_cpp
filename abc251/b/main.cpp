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
    lint n, w;
    cin >> n >> w;
    vector<lint> a(n);
    rep(i, 0, n) cin >> a[i];
    a.push_back(0), a.push_back(0);
    set<lint> s;

    rep(i, 0, sz(a)) {
        rep(j, 0, i) {
            rep(k, 0, j) {
                lint sum = a[i] + a[j] + a[k];
                if (sum <= w) s.insert(sum);
            }
        }
    }

    cout << sz(s) << '\n';
    return 0;
}