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
    vector<string> s(n);
    set<string> s_set;
    rep(i, 0, n) {
        cin >> s[i];
        s_set.insert(s[i]);
    }
    string ans = "satisfiable";

    for (auto str : s) {
        string origin = str;
        if (s[0] == "!") origin = str.substr(1);
        if (s_set.count("!" + origin) && s_set.count(origin)) {
            ans = origin;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}