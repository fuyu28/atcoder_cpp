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
  lint n, m, q;
  cin >> n >> m >> q;
  vector<set<lint>> user(n+1);
  set<lint> superUser;
  rep(i, 0, q) {
    lint queryNum, x, y;
    cin >> queryNum;
    if (queryNum == 1) {
      cin >> x >> y;
      user[x].insert(y);
    } else if (queryNum == 2) {
      cin >> x;
      superUser.insert(x);
    } else if (queryNum == 3) {
      cin >> x >> y;
      if (!user[x].empty() && user[x].count(y) || superUser.count(x)) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }
}