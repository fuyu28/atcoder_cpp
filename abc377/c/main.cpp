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
    vector<pair<int, int>> ab(m);
    rep(i, m) {
        cin >> ab[i].first >> ab[i].second;
        ab[i].first--; ab[i].second--;
    }
    vector<vector<int>> search = {{2, 1}, {-2, 1}, {1, 2}, {-1, 2}};
    set<pair<int, int>> is_place;
    for(auto [a, b] : ab) {
        is_place.insert({a, b});
    }

    for(auto [a, b] : ab) {
        rep(i, 2) {
            rep(j, 4) {
            int x = a + search[j][0];
            int y = b + (i ? -1 : 1) * search[j][1];
                if(0 <= x && x < n && 0 <= y && y < n) {
                    is_place.insert({x, y});
                    //cout << "x: " << x << " y: " << y << endl;
                }
            }
        }
    }
    cout << (ll)n*n - sz(is_place) << endl;
    return 0;
}
