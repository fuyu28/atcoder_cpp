#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int move(int n, int from, int to, int ng) {
        if (from > to) swap(from, to);
        if (from < ng && ng < to) {
            return n + from - to;
        } else {
            return to - from;
        }
    }

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int n, q;
    cin >> n >> q;
    int ans = 0;
    int l = 1, r = 2;
    string h; int t;

    rep(i, q) {
        cin >> h >> t;
        if (h == "L") {
            ans += move(n, l, t, r);
            l = t;
        } else {
            ans += move(n, r, t, l);
            r = t;
        }
    }
    cout << ans << endl;
    return 0;
}