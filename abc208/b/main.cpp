#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int p;
    cin >> p;

    vector<int> coins = {1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};
    int ans = 0;

    for(int i = 9; i >= 0; i--) {
        int c = coins[i];
        int k = p / c;
        ans += k;
        p -= k * c;
    }
    cout << ans << endl;
    return 0;
}