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
    vector<lint> a(n);
    rep(i, 0, n) cin >> a[i];
    deque<lint> b;
    rep(i, 0, n) {
    if ((i+1) % 2 == 0) b.push_front(a[i]);
    else b.push_back(a[i]);
    }
    if (n % 2) reverse(all(b));
    rep(i, 0, n) {
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}