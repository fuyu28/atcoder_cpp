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
    vector<vector<pair<int, int>>> people(n);
    rep(i, n) {
        int a;
        cin >> a;
        rep(j, a) {
            int x, y;
            cin >> x >> y;
            --x;
            people[i].push_back({x, y});
        }
    }

    int ans = 0;
    for(int bit = 0; bit < (1 << n); ++bit) {
        bitset<15> honest(bit);
        bool ok = true;
        for(int i = 0; i < n; ++i) {
            if(!honest.test(i)) continue;
            for(auto p : people[i]) {
                int x = p.first;
                int y = p.second;
                if(honest.test(x) && y == 0) {
                    ok = false;
                }
                if(!honest.test(x) && y == 1) {
                    ok = false;
                }
            }
        }
        if(ok) {
            ans = max(ans, (int)honest.count());
        }
    }

    cout << ans << endl;
    return 0;
}