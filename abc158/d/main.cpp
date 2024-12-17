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
    string s;
    lint q;
    cin >> s >> q;
    deque<char> ans;
    for (auto c : s) ans.push_back(c);
    bool rev = false;
    rep(i, 0, q) {
        lint t;
        cin >> t;
        if (t == 1) rev = !rev;
        else {
            lint f;
            char c;
            cin >> f >> c;
            bool crev = rev;
            if (f == 1) crev = !crev;
            if (crev) ans.push_front(c);
            else ans.push_back(c);
        }
    }
    if (rev) reverse(all(ans));
    for (auto c : ans) cout << c;
    cout << endl;
    return 0;
}