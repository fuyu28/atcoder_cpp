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
    string s;
    cin >> s;
    string ans;

    if (s == "N") ans = "S";
    else if (s == "S") ans = "N";
    else if (s == "E") ans = "W";
    else if (s == "W") ans = "E";
    else if (s == "NE") ans = "SW";
    else if (s == "NW") ans = "SE";
    else if (s == "SE") ans = "NW";
    else if (s == "SW") ans = "NE";
    
    cout << ans << '\n';
    return 0;
}