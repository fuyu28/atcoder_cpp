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
  lint n,l;
  cin >> n >> l;
  vector<lint> d(n-1);
  rep(i,0,n-1) cin >> d[i];

  vector<lint> point(l+1, 0);

  lint current=0;
  rep(i,0,n) {
    point[current] += 1;
    if (i != n-1) {
    current = (current + d[i]) % l;
    }
  }
  
  lint ans=0, dist=l/3;
  if (l%3 != 0) {
    cout << 0 << "\n";
    return 0;
  }
  
  rep(i,0,l) {
    if (i+2*dist <= l) {
      if (point[i] != 0 && point[i+dist] != 0 && point[i+2*dist] != 0) {
        ans += point[i] * point[i+dist] * point[i+2*dist];
      }
    }
  }
  
  cout << ans << "\n";
}