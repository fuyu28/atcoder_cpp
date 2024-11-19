#pragma region header
#include <bits/stdc++.h>
#define REP(i,n) for (int i = 0; (i) < (int)(n); ++(i))
#define ALL(x) begin(x), end(x)
using namespace std;
template <class T> bool chmin(T& a, const T& b) {return a>b ? a=b, true : false;}
template <class T> bool chmax(T& a, const T& b) {return a<b ? a=b, true : false;}
#pragma endregion header

int main() {
  int n,m;
  cin >> n >> m;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) cin >> a[i];
  sort(a.begin(), a.end());
  int ans = 0;
  for (int i=0; i < n; i++){
    int idx = lower_bound(a.begin(),a.end(),a[i]+m) - a.begin();
    ans = max(ans, idx-i);
  }
  cout << ans << endl;
}
