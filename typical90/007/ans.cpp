#pragma region header
#include <bits/stdc++.h>
#define REP(i,n) for (int i = 0; (i) < (int)(n); ++(i))
#define ALL(x) begin(x), end(x)
using namespace std;
template <class T> bool chmin(T& a, const T& b) {return a>b ? a=b, true : false;}
template <class T> bool chmax(T& a, const T& b) {return a<b ? a=b, true : false;}
#pragma endregion header

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; ++i) cin >> a[i];
  sort(a.begin(), a.end());
  int q;
  cin >> q;
  for (int i=0; i<q; ++i){
    int ans = 1001001001;
    int b;
    cin >> b;
    auto itr = lower_bound(a.begin(), a.end(), b);
    if (itr!=a.end()) ans = min(ans, abs(*itr - b));
    if (itr!=a.begin()) ans = min(ans,abs(*(itr-1)-b));
    cout << ans << endl;
  }
}
