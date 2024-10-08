#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    int nokori;
    int ans=0;

    rep(i, a+1) {
        rep(j, b+1) {
            nokori = x - (i * 500 + j * 100);
            if (nokori < 0) break;
            if (nokori % 50 == 0 && nokori / 50 <= c) ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}