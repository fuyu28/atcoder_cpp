#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    ll N;
    cin >> N;

    vector<int> bucket(10e9 + 1, 0);
    vector<ll> A(N+1);
    ll C;
    for (int i = 0; i < N; ++i) {
        cin >> A.at(i) >> C;
        bucket.at(A.at(i)) = C;
    }

    set<ll> ans_num;
    ll costmin = INT_MAX;
    ll cnt = 0;

    for (ll i = 10e9; i > 0; --i) {
        if (costmin > bucket.at(i) && bucket.at(i) != 0) {
            costmin = bucket.at(i);
            ans_num.insert(i);
        }
        if (bucket.at(i) != 0) cnt++;
    }

    set<ll> ans;
    for (int i = 0; i < N; ++i) {
        if (ans_num.count(A.at(i))) {
            ans.insert(i + 1);
        }
    }

    cout << ans.size() << endl;
    for (auto itr = ans.begin(); itr != ans.end(); ++itr) cout << *itr << " ";
    cout << endl;
    return 0;
}