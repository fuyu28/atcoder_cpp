#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (ll)(x).size()
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N, M;
    cin >> N >> M;
    vector<ll> A(N), B(M);
    for(auto& x : A) cin >> x;
    for(auto& x : B) cin >> x;
    sort(all(A)); sort(all(B));

    vector<ll> usedA(N);
    ll cnt = 0; ll cnt_a = 0; ll ans = -1;
    rep(cnt_b, M) {
        while(cnt_a < N) {
            if(A.at(cnt_a) >= B.at(cnt_b)) {
                usedA.at(cnt) = A.at(cnt_a);
                ++cnt; ++cnt_a;
                break;
            }
            ++cnt_a;
        }
    }
    int sz_usedA = count_if(all(usedA),[](ll x) {return x != 0;});
    if(sz_usedA == M) ans = 0;
    if(ans == 0) ans = accumulate(all(usedA),0);
    cout << ans << endl;
    return 0;
}