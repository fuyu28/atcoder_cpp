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
  lint h, w, n;
  cin >> h >> w >> n;

  vector a(h+1, vector<lint>());
  vector b(w+1, vector<lint>());
  vector<bool> ux(h+1), uy(w+1);
  vector<bool> used(n);
  rep(i, 0, n) {
    lint x, y;
    cin >> x >> y;
    a[x].push_back(i);
    b[y].push_back(i);
  }
  lint q;
  cin >> q;
  while (q--) { // 全クエリをみる
    lint t;
    cin >> t;
    if (t == 1) { // クエリが1
      lint x;
      cin >> x;
      if (ux[x]) cout << 0 << "\n"; // その行を見たか
      else { // まだ見てない行
        lint ans = 0;
        for (int e: a[x]) { // ゴミのxについて見る
          if (!used[e]) { // 見てないゴミを数える
            used[e] = true; 
            ans++;
          }
        }
        ux[x] = true; // 行を見たのでチェックをつける
        cout << ans << "\n";
      }
    }
    else { // クエリが2
      lint y;
      cin >> y;
      if (uy[y]) cout << 0 << "\n";
      else {
        lint ans = 0;
        for (lint e: b[y]) {
          if (!used[e]) {
            used[e] = true;
            ans++;
          }
        }
        uy[y] = true;
        cout << ans << "\n";
      }
    }
  }
}