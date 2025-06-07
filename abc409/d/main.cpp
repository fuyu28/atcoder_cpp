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
  lint t;
  cin >> t;
  rep(i,0,t) {
    lint n;
    string s;
    cin >> n >> s;

    lint l=-1,r=n;
    rep(j,0,n-1) {
      if (s[j] > s[j+1]) {
        l=j;
        break;
      }
    }
    if (l==-1) {
      cout << s << "\n";
      continue;
    }

    rep(j,l+1,n) {
      if (s[l] < s[j]) {
        r=j;
        break;
      }
    }
    
    rep(j,0,l) cout << s[j];
    rep(j,l+1,r) cout << s[j];
    cout << s[l];
    rep(j,r,n) cout << s[j];
    cout << "\n";
  }
}