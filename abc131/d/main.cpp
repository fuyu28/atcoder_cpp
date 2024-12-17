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
    vector<pair<ll, ll>> ab(n);
    rep(i, n) cin >> ab[i].second >> ab[i].first;
    sort(all(ab));

    int finished = 0;
    int now = 0;
    for(auto [b, a] : ab) {
        if (now + a <= b) {
            now += a;
            finished++;
        }
    }
    if (finished == n) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}