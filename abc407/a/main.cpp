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
  lint a, b;
  cin >> a >> b;
  double div = (double)a / b;
  lint ans = 0;
  while (true) {
    if (div <= ans) {
      if (ans - div >= 0.5) cout << ans - 1 << "\n" ;
      else cout << ans << "\n";
      return 0;
    }   
    ans++;
  }
}