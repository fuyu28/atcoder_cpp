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
    vector<map<lint, lint>> dice_count(n);
    vector<lint> dice_face(n);
    rep(i, 0, n) {
        lint k;
        cin >> k;
        dice_face[i] = k;
        rep(j, 0, k) {
            lint a;
            cin >> a;
            dice_count[i][a]++;
        }
    }

    double ans = 0;
    rep(i, 0, n) {
        rep(j, 0, n) {
            lint each = 0;
            if (i == j) continue;
            for (auto [num, i_cnt] : dice_count[i]) {
                if (dice_count[j].count(num)) {
                    lint j_cnt = dice_count[j][num];
                    each += i_cnt * j_cnt;
                }
            }
            double p = each / ((double)dice_face[i] * (double)dice_face[j]);
            if (ans < p) ans = p;
        }
    }

    cout << fixed << setprecision(15) << ans << '\n';
    return 0;
}