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
    string t;
    cin >> t;

    bool ans = true;
    lint size = sz(t);
    vector<lint> cnt(26, 0);
    if(!(size%2 ==0)) ans = false;
    rep(i, 0, size/2) {
        if(!(t[2*i-1-1] == t[2*i-1])) ans = false;
    }
    rep(i, 0, size) {
        cnt[t[i]-'a']++;
    }
    rep(i, 0, 26) {
        if(!(cnt[i] == 0 || cnt[i] == 2)) ans = false;
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}