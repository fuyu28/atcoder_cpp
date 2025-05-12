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
  lint n,m;
  cin >> n >> m;
  vector<lint> a(n);
  rep(i,0,n) cin >> a[i];
  vector<lint> bucket(m+1, 0);
  for(auto x : a) bucket[x]++;

  rep(i,1,n+1) {
    rep (j,1,m+1) {
      lint y = bucket[j];
      if (y == 0) {
        cout << i-1 << endl;
        return 0;
      }
    }
    lint x = a[n-i];
    bucket[x]--;
  }
  cout << n << endl;
}