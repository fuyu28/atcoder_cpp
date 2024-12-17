#pragma region header
#include <bits/stdc++.h>
#define REP(i,n) for (int i = 0; (i) < (int)(n); ++(i))
#define ALL(x) begin(x), end(x)
using namespace std;
template <class T> bool chmin(T& a, const T& b) {return a>b ? a=b, true : false;}
template <class T> bool chmax(T& a, const T& b) {return a<b ? a=b, true : false;}
#pragma endregion header

using ll = long long;

int main() {
  ll a,b,x;
  cin >> a>>b>>x;

  auto isOK = [&](int m)->bool {
    string st = to_string(m);
    int d = st.size();
    return a*m + b*d <= x; // この部分がintだとoverflowすることに注意
  };

  int ok = 0, ng = 1e9+1;
  while (abs(ok-ng)>1){
    int mid = (ok+ng)/2;
    if (isOK(mid)) ok = mid;
    else ng = mid;
  }
  cout << ok << endl;
}
