#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int k, s;
    cin >> k >> s;
    int ans = 0;

    rep(x, k+1) {
        rep(y, k+1) {
            int z = s - x -y;
            if (0 <= z && z <= k) ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}