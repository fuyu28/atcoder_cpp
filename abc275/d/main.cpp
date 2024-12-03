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

    map<lint, lint> memo;
    auto rec = [&](auto f, lint x)->lint {
        if (x == 0) return 1;
        if (memo.find(x) != memo.end()) return memo[x];
        else return memo[x] = f(f, x/2) + f(f, x/3);
    };
    cout << rec(rec, n) << endl;
    return 0;
}