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
  lint n, m;
  cin >> n >> m;
  vector<lint> wall(n+2, 0);
  vector<pll> canon(m);
  rep(i, 0, m) {
    lint l, r;
    cin >> l >> r;
    canon[i] = make_pair(l, r);
    wall[l] += 1, wall[r+1] -= 1;
  }

  rep(i, 0, n+2) {
    wall[i+1] += wall[i];
  }
  sort(all(wall));

  cout << wall[2] << "\n";
}