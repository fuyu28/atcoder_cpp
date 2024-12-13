#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int n;
    cin >> n;
    int a_max = -(1e9+1), b_max = -(1e9+1);
    rep(i, n) {
        int a; cin >> a;
        a_max = max(a_max, a);
    }
    rep(i, n) {
        int b; cin >> b;
        b_max = max(b_max, b);
    }
    cout << a_max + b_max << endl;
    return 0;
}