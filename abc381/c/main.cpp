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
    lint n;
    string s;
    cin >> n >> s;

    lint ans = 0;
    lint idx = 0;
    rep(i, 0, n) {
        if(s[i] == '/') {
            REP(j, 1, abs(i-idx)) {
                if(i-j >= 0 && i+j < n) {
                    if(!(s[i-j] == '1' && s[i+j] == '2') || !(i-j >= 0 && i+j < n)) {
                        ans = max(ans, (j-1)*2+1);
                        break;
                    }
                } else {
                    ans = max(ans, (j-1)*2+1);
                        break;
                }
            }
            idx = i;
        }
    }
    cout << ans << endl;
    return 0;
}