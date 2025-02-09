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
    lint n, m;
    cin >> n >> m;
    vector<lint> a(m);
    rep(i, 0, m) cin >> a[i];
    sort(all(a));
    


    vector<lint> missingNumbers;
    REP(i, 1, n) {
        if (count(all(a), i) == 0) {
            missingNumbers.push_back(i);
        }
    }
    cout << missingNumbers.size() << '\n';
    for (auto x : missingNumbers) cout << x << ' ';
    cout << '\n';
    return 0;
}