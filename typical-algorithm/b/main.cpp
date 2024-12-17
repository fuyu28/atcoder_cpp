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
    vector<pair<int, int>> ab(n);
    rep(i, n) {
        int a,b;
        cin >> a >> b;
        ab[i] = {b, a};
    }
    sort(all(ab));
    int ans = 0;
    int tmp = 0;
    for(auto [b, a] : ab) {
        if (tmp < a) {
            tmp = b;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}