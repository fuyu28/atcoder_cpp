#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int t, n;
    cin >> t >> n;
    vector<int> l(n), r(n);
    rep(i, n) cin >> l[i] >> r[i];
    vector<int> diff(t+1,0), cum(t+1,0);

    rep(i, n) {
        diff[l[i]]++;
        diff[r[i]]--;
    }
    rep(i,t+1) {
        cum[i+1] = cum[i] + diff[i];
    }
    for (int i=1;i<=t;++i) {
        cout << cum[i] << endl;
    }
    return 0;
}