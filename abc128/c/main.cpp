#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> s(m);
    vector<int> p(m);
    rep(i, m) {
        int k;
        cin >> k;
        vector<int> ss(k);
        rep(j, k) {
            cin >> ss[j];
            --ss[j];
        }
        s[i] = ss;
    }
    rep(i, m) {
        cin >> p[i];
    }

    int ans = 0;
    for (int bit = 0; bit < (1 << n); ++bit) {
        bitset<10> sw(bit);
        bool ok = true;
        rep(i, m) {
            int cnt = 0;
            rep(j, sz(s[i])) {
                if (sw.test(s[i][j])) {
                    ++cnt;
                }
            }
            if (cnt % 2 != p[i]) {
                ok = false;
            }
        }
        if (ok) {
            ++ans;
        }
    }

    cout << ans << endl;
    return 0;
}