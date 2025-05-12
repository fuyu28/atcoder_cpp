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
const int dy[4] = {-1, 1, 0, 0};
const int dx[4] = {0, 0, -1, 1};
const string dir = "^v<>";
const string rev = "v^><";
struct Init { Init() { ios::sync_with_stdio(0); cin.tie(0); } }init;
void YorN(bool x) { cout << (x ? "Yes" : "No") << "\n";};
void yorn(bool x) { cout << (x ? "yes" : "no") << "\n";};


int main() {
  lint h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i,0,h) {
    cin >> s[i];
  }
  
  queue<pll> que;
  rep(i,0,h) {
    rep(j,0,w) {
      if (s[i][j] == 'E') que.emplace(i,j);
    }
  }
  
  auto ok = [&](int i, int j){return 0 <= i && i < h && 0 <= j && j < w;};

  while(!que.empty()) {
    auto [i, j] = que.front();
    que.pop();
    rep(k,0,4) {
      lint ni = i+dy[k];
      lint nj = j+dx[k];
      if (!ok(ni, nj)) continue;
      if (s[ni][nj] != '.') continue;
      s[ni][nj] = rev[k];
      que.emplace(ni, nj);
    }
  }
  for (auto& x: s) cout << x << endl;
}