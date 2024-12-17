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
    vector<int> A(N);
    vector<string> S(N);
    rep(i, N) cin >> A.at(i) >> S.at(i);

    int R = 0, L = 0;
    int R_old = 0, L_old = 0;
    int ans = 0;

    rep(i,N) {
        if (S.at(i) == "L") L = A.at(i);
        else R = A.at(i);
        if (R_old == 0) R_old = R;
        if (L_old == 0) L_old = L;
        ans += abs(R - R_old) + abs(L - L_old);
        L_old = L; R_old = R;
    }

    cout << ans << endl;
    return 0;
}