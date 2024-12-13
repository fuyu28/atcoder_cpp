#pragma region header
#include <bits/stdc++.h>
using namespace std;
#pragma endregion header

using ll = long long;

int main() {
  int n,m,k;
  cin >> n >> m>> k;
  vector<int> a(n), b(m);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<m; i++) cin >> b[i];

  vector<ll> sum_a(n+1), sum_b(m+1);
  for (int i=0; i<n; i++) sum_a[i+1] += sum_a[i] + a[i];
  for (int i=0; i<m; i++) sum_b[i+1] += sum_b[i] + b[i];

  int ans = 0;
  for (int an=0; an<=n; an++){
    ll rem = k - sum_a[an];
    if (rem<0) continue;

    int ok = 0, ng =m+1;
    while (abs(ok-ng)>1){
      int mid = (ok+ng)/2;
      if (sum_b[mid]<=rem) ok = mid;
      else ng = mid;
    }
    ans = max(ans, an+ok);
  }
  cout << ans << endl;
}
