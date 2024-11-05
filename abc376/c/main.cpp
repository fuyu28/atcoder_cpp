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
    vector<int> a(n), b(n-1);
    rep(i, n) cin >> a.at(i);
    rep(i, n-1) cin >> b.at(i);
    sort(all(a)), sort(all(b));

    int ans = -1;
    rep(i, n-1) {
        if (a.at(i) > b.at(i)) {
            cout << ans << endl;
            return 0;
        }
    }
    for(int i = n-1; i > 0; --i) {
        if (a.at(i) > b.at(i-1)) {
            ans = a.at(i);
            cout << ans << endl;
            return 0;
        }
    }
    ans = a.at(0);
    cout << ans << endl;
    return 0;
}