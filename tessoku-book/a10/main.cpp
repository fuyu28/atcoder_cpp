#include <bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)
#define sz(x) (lint)(x).size()
#define rep(i, x, limit) for (lint i = (lint)x; i < (lint)limit; i++)
#define REP(i, x, limit) for (lint i = (lint)x; i <= (lint)limit; i++)
using lint = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<lint, lint>;
const int dy[4] = {-1,0,1,0};
const int dx[4] = {0,1,0,-1};

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    lint n, d;
    vector<lint> a(100009), l(100009), r(100009);
    vector<lint> p(100009, 0), q(100009, 0);
    cin >> n;
    REP(i, 1, n) cin >> a[i];
    cin >> d;
    REP(i, 1, d) cin >> l[i] >> r[i];

    p[1] = a[1];
    REP(i, 2, n) p[i] = max(p[i-1], a[i]);
    q[n] = a[n];
    for (lint i=n-1; i>=1; i--) q[i] = max(q[i+1], a[i]);
    REP(i, 1, d) {
        cout << max(p[l[i]-1], q[r[i]+1]) << endl;
    }
    return 0;
}