#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int N, T, P;
    int day = 0;

    cin >> N >> T >> P;
    vector<int> L(N);
    rep(i, N) cin >> L.at(i);

    while (true) {
        int cnt = 0;
        rep(i, N) L.at(i)++;
        rep(i, N) {
            if (L.at(i) >= T) cnt++;
        }
        if (cnt >= P) break;
        day++;
    }
    if (day!=0) day++;
    cout << day << endl;
    return 0;
}