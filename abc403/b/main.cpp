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

bool isInclusive(string &t, string &u, lint ti, lint ui) {
  if (ui == sz(u)) return true;
  if (ti == sz(t)) return false;
  if (t[ti] == u[ui] || t[ti] == '?') return isInclusive(t, u, ti+1, ui+1);
  return false;
}

int main() {
  string t, u;
  cin >> t >> u;

  rep(i, 0, sz(t)-sz(u)+1) {
    if (isInclusive(t, u, i, 0)) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}