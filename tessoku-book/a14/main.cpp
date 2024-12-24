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
    lint n, k;
    cin >> n >> k;
    vector<lint> a(n), b(n), c(n), d(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];
    rep(i, 0, n) cin >> c[i];
    rep(i, 0, n) cin >> d[i];
    vector<lint> p(n*n), q(n*n);
    
    rep(i, 0, n) {
        rep(j, 0, n) {
            p[i*n+j] = a[i] + b[j];
        }
    }
    rep(i, 0, n) {
        rep(j, 0, n) {
            q[i*n+j] = c[i] + d[j];
        }
    }
    sort(all(q));

    rep(i, 0, n*n) {
        lint pos1 = lower_bound(all(q), k-p[i]) - q.begin();
        if (pos1 <= n*n && q[pos1] == k-p[i]) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}