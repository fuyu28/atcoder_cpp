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
    lint q;
    cin >> q;
    vector<lint> snake;
    lint cur = 0, head = 0;
    rep(i, 0, q) {
        lint t;
        cin >> t;
        if (t == 1) {
            lint l;
            cin >> l;
            snake.push_back(cur);
            cur += l;
        } else if (t == 2) {
            head++;
        } else {
            lint k;
            cin >> k;
            k--;
            if (snake[head + k] - snake[head] < 0) cout << 0 << '\n';
            else cout << snake[head + k] - snake[head] << '\n';
        }
    }
    return 0;
}