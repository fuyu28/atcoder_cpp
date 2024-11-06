#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
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
    
    lint n, x;
    vector<lint> a(100009);
    cin >> n >> x;
    rep(i, 0, n) cin >> a[i];

    lint ok = 0, ng = n;
    while (abs(ok-ng) > 1) {
        lint mid = (ok+ng) / 2;
        if (a[mid] <= x) ok = mid;
        else ng = mid;
    }
    cout << ok+1 << endl;
    return 0;
}