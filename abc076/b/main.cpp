#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n, k;
    cin >> n >> k;
    int ans = 1;
    
    rep(i, n) {
        if (ans * 2 < ans + k) {
            ans *= 2;
        } else {
            ans += k;
        }
    }
    cout << ans << endl;
    return 0;
}