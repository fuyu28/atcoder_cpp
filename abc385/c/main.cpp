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
    lint n;
    cin >> n;
    vector<lint> h(n);
    rep(i, 0, n) cin >> h[i];

    lint maxAns = 0;
    REP(k, 1, n) { // distance 1 to n
        lint currentMax = 0;
        rep(start, 0, k) { // 各グループの開始位置
            lint height = 0, current = 0, groupMax = 0;
            for (lint i = start; i < n; i += k) { // check
                if (h[i] != height) {
                    current = 0;
                    height = h[i];
                }
                current++;
                groupMax = max(groupMax, current);
            }
            currentMax = max(currentMax, groupMax);
        }
        maxAns = max(maxAns, currentMax);
    }

    cout << maxAns << endl;
}