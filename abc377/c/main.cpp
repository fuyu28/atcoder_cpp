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
    vector<int> a(m), b(m);
    rep(i, m) cin >> a[i] >> b[i];
    int ans = n*n;
    int bad = 0;

    vector<int> toru{2, 1, -1, -2};

    rep(i, m) {
        rep(k, 4) {
            rep(l, 4) {
                if (0 <= a[i]+toru[k] && a[i]+toru[k] < n && 0 <= b[i]+toru[l] && b[i]+toru[l] < n && abs(toru[k]) != abs(toru[l])) {
                    bad++;
                }
            }
        }
    }

    cout << ans-bad << endl;
    return 0;
}