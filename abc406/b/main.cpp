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

lint digit_count(lint num) {
  lint digit = 0;
  while (num > 0) {
    num /= 10;
    digit++;    
  }
  return digit;
}

int main() {
  lint n, k;
  cin >> n >> k;
  vector<lint> a(n);
  rep(i, 0, n) cin >> a[i];
  
  lint lim = pow(10, k);

  lint result = 1;
  rep(i, 0, n) {
    if (result > lim / a[i]) result = 1;
    else result *= a[i];
    if (digit_count(result) > k) {
      result = 1;
    }
    // cout << result << "\n";
  }
  cout << result << "\n";
}
