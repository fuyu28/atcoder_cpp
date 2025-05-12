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
  vector<lint> a(n);
  rep(i,0,n) cin >> a[i];

  vector<lint> a_sum(n, 0);
  rep(i,0,n) a_sum[i+1] = a_sum[i] + a[i];

  lint ans = 0;
  rep(i,0,n) {
    ans += a[i] * (a_sum[n] - a_sum[i+1]);
  }
  cout << ans << endl;
}