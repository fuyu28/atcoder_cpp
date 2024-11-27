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

    bool ans = true;
    lint size = sz(s);
    if(size % 2 != 1) ans = false;
    rep(i, 0, (size+1)/2-1) {
        if(s[i] != '1') ans = false;
    }
    if(s[(size+1)/2-1] != '/') ans = false;
    rep(i, (size+1)/2, size) {
        if(s[i] != '2') ans = false;
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}