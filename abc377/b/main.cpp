#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    vector<string> masu(8);

    rep(i, 8) cin >> masu[i];

    int ans = 0;

    for (int i=0; i<8; ++i) {
        for (int j=0; j<8; ++j) {
            if (masu[i][j] == '#') {
                rep(k, 8) {
                    if (masu[i][k] != '#' ) masu[i][k] = '!';
                    if (masu[k][j] != '#' ) masu[k][j] = '!';
                }
            }
        }
    }

    rep(i, 8) {
        rep(j, 8) {
            if (masu[i][j] == '.') ans++;
        }
    }

    cout << ans << endl;
    return 0;
}