#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int n;
    int cnt=0;
    bool all_even = true;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    while (true) {
        for (int i : a) {
            if (i % 2 == 1) {
                all_even = false;
                break;
            }
        }
        if (all_even) {
            ++cnt;
            rep(i,n) a[i] /= 2;
        } else{
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}