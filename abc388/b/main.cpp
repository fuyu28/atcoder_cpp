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
    vector<lint> t(n), l(n);
    rep(i, 0, n) cin >> t[i] >> l[i];
    REP(i, 1, d) {
        lint max_size = 0;
        rep(j, 0, n) {
            if (t[j] * (l[j]+i) >= max_size) {
                max_size = t[j] * (l[j]+i);
            }
        }
        cout << max_size << endl;
    }
    return 0;
}