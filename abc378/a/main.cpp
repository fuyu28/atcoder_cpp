#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    vector<int> n(4);
    vector<int> a(5, 0);
    set<int> s;
    rep(i, 4) {
        cin >> n[i];
        s.insert(n[i]);
    }

    if(sz(s) == 1) cout << 2 << endl;
    if(sz(s) == 2) {
        for(int i = 0; i < 4; i++) {
            a[n[i]]++;
        }
        rep(i, 5) {
            if(a[i] == 2) {
                cout << 2 << endl;
                return 0;
            }
        }
        cout << 1 << endl;
    }
    if(sz(s) == 3) cout << 1 << endl;
    if(sz(s) == 4) cout << 0 << endl;
    return 0;
}