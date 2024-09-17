#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    string S;
    cin >> S;
    int r, m;

    rep(i, sz(S)) {
        if (S.at(i) == 'R') r = i;
        if (S.at(i) == 'M') m = i;
    }

    if (r < m) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}