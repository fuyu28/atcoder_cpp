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
    cin >> n;
    map<string, lint> s;
    rep(i, 0, n) {
        string str;
        cin >> str;
        s[str]++;
    }
    lint cnt_max = 0;
    for (auto x : s) {
        cnt_max = max(cnt_max, x.second);
    }
    for (auto x : s) {
        if (x.second == cnt_max) cout << x.first << endl;
    }
    return 0;
}