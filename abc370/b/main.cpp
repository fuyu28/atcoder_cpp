#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int N;
    cin >> N;
    int ans = 1;
    vector<vector<int>> a(N+9, vector<int>(N+9));

    for (int i = 0; i < N; i++) {
        rep(j, i+1) cin >> a.at(i).at(j);
    }

    for (int i = 0; i < N; i++) {
        if (ans > i+1) ans = a.at(ans-1).at(i);
        else ans = a.at(i).at(ans-1);
    }
    cout << ans << endl;

    return 0;
}