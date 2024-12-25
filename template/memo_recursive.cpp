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
    lint n;
    cin >> n;
    auto rf = [&](auto f, lint k, vector<lint> &memo)->lint {
        if (k == 0 || k == 1) return 1;
        if (memo[k] != -1) return memo[k];
        return memo[k] = f(f, k-1, memo) + f(f, k-2, memo);
    };
    vector<lint> memo(n+1, -1);
    cout << rf(rf, n-1, memo) << endl;
}