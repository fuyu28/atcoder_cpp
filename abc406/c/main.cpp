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
const int dx[4] = {0, 0, -1, 1};
const int dy[4] = {-1, 1, 0, 0};
const string var = "^v<>";
const string rev_var = "v^><";
void printYES (bool x) { cout << (x ? "YES" : "NO") << "\n";};
void printYes(bool x) { cout << (x ? "Yes" : "No") << "\n";};
void printyes(bool x) { cout << (x ? "yes" : "no") << "\n";};
struct Init { Init() { ios::sync_with_stdio(0); cin.tie(0); } }init;

int main() {
  lint n;
  cin >> n;
  vector<lint> p(n);
  rep(i, 0, n) cin >> p[i];
  vector<pair<char, lint>> v;
  
  rep(i, 0, n-1) {
    if (p[i] < p[i+1]) {
      if (v.empty() || v.back().first == '>') v.push_back({'<', 1});
      else v.back().second++;
    } else {
      if (v.empty() || v.back().first == '<') v.push_back({'>', 1});
      else v.back().second++;
    } 
  }

  lint v_sz = ssize(v);
  lint ans = 0;
  rep(i, 1, v_sz-1) if (v[i].first == '>') ans += v[i-1].second * v[i+1].second;
  cout << ans << "\n";
}