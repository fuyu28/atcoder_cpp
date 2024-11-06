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
    
    lint h, w, n;
    vector<vector<lint>> diff(1509, vector<lint>(1509, 0)), cum(1509, vector<lint>(1509, 0));
    vector<lint> a(100009), b(100009), c(100009), d(100009);
    cin >> h >> w >> n;
    rep(i, 0, n) cin >> a[i] >> b[i] >> c[i] >> d[i];

    rep(i, 0, n) {
        diff[a[i]][b[i]]++;
        diff[a[i]][d[i]+1]--;
        diff[c[i]+1][b[i]]--;
        diff[c[i]+1][d[i]+1]++;
    }
    REP(i, 1, h) {
        REP(j, 1, w) {
            cum[i][j] = cum[i][j-1] + diff[i][j];
        }
    }
    REP(j, 1, w) {
        REP(i, 1, h) {
            cum[i][j] = cum[i-1][j] + cum[i][j];
        }
    }

    REP(i, 1, h) {
        REP(j, 1, w) {
            if (j >= 2) cout << " ";
            cout << cum[i][j];
        }
        cout << endl;
    }
    return 0;
}