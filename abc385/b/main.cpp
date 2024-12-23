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
    lint h, w, x, y;
    cin >> h >> w >> x >> y;
    vector<string> s(h);
    rep(i, 0, h) cin >> s[i];
    string t;
    cin >> t;

    x--; y--;
    lint ans = 0;
    for (int i=0; i<t.size(); i++) {
        if (s[x][y] == '@') {
            ans++;
            s[x][y] = '.';
        }
        if (t[i] == 'U' && x-1 >= 0) {
            if (s[x-1][y] != '#') x--;
        }
        if (t[i] == 'D' && x+1 < h) {
            if (s[x+1][y] != '#') x++;
        }
        if (t[i] == 'L' && y-1 >= 0) {
            if (s[x][y-1] != '#') y--;
        }
        if (t[i] == 'R' && y+1 < w) {
            if (s[x][y+1] != '#') y++;
        }
    }
    if (s[x][y] == '@') {
        ans++;
        s[x][y] = '.';
    }
    cout << x+1 << " " << y+1 << " " << ans << "\n"; 
}