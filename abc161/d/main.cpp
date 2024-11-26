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
    lint k;
    cin >> k;
    auto rec = [&](auto f, lint d, lint val, vector<lint>& lunlun)->void {
        lunlun.push_back(val);
        if (d == 10) return;
        REP(i, -1, 1) {
            lint add = val % 10 + i;
            if (0 <= add && add <= 9) f(f, d+1, val*10+add, lunlun);
        }
    };
    vector<lint> lunlun;
    rep(i, 1, 10) rec(rec, 1, i, lunlun);
    sort(all(lunlun));
    cout << lunlun[k-1] << endl;
    return 0;
}