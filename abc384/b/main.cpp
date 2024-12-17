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
    lint n ,r;
    cin >> n >> r;
    rep(i, 0, n) {
        lint d, a;
        cin >> d >> a;
        if (d == 1) {
            if (1600 <= r && r < 2800) {
                r += a;
            }
        }
        if (d == 2) {
            if (1200 <= r && r < 2400) {
                r += a;
            }
        }
    }
    cout << r << '\n';
    return 0;
}