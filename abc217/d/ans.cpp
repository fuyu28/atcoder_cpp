#pragma region header
#include <bits/stdc++.h>
#define REP(i,n) for (int i = 0; (i) < (int)(n); ++(i))
#define ALL(x) begin(x), end(x)
using namespace std;
template <class T> bool chmin(T& a, const T& b) {return a>b ? a=b, true : false;}
template <class T> bool chmax(T& a, const T& b) {return a<b ? a=b, true : false;}
#pragma endregion header

int main() {
  int L, Q;
  cin >> L >> Q;
  set<int> st;
  st.insert(0);
  st.insert(L);

  for (int i=0; i<Q; i++) {
    int c,x;
    cin >> c >> x;
    if (c==1){
      st.insert(x);
    }
    else{
      auto itr = st.lower_bound(x);
      int right = *itr;
      itr--;
      int left = *itr;
      cout << right-left << endl;
    }
  }
}
