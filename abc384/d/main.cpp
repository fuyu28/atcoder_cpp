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
    lint n, s;
    cin >> n >> s;
    vector<lint> a(n);
    rep(i, 0, n) {
        cin >> a[i];
    }

    lint a_sum = reduce(all(a));
    bool ans = false;
    rep(i, 0, n) {
    lint first_sum = 0;
    first_sum += a[i];
    if (first_sum == s) {
        ans = true;
        break;
        }
    } // n = 1
    rep(i, 2, (lint) ((s/a_sum) + 2)) {
        if (a_sum * (i-1) <= s && s <= a_sum * i) {
            rep (start, 0, n) {
                lint tmp_sum = 0;
                // cout << "first tmp_sum: " << tmp_sum << '\n';
                rep(j, 0, n) {
                    if (j < start) {
                        tmp_sum += a[j] * (i-1);
                    } else {
                        tmp_sum += a[j] * i;
                    }
                }
                // cout << "tmp_sum: " << tmp_sum << '\n';
                if (tmp_sum == s) {
                    ans = true;
                    break;
                }
            }
        }
    } // n >= 2
    cout << (ans ? "Yes" : "No") << '\n';
    return 0;
}