#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int n, q;
    cin >> n >> q;
    vector<string> h(q);
    vector<int> t(q);
    rep(i, q) {
        cin >> h.at(i) >> t.at(i);
    }
    int L = 1, R = 2;
    int ans = 0;

    rep(i, q) {
        int cnt = 0;
        if(h.at(i) == "L") {
            int tmp = L;
            while(true) {
                tmp++; cnt++;
                if(tmp > n) tmp -= n;
                if(tmp == R) {
                    cnt = 0;
                    break;
                }
                if(tmp == t.at(i)) {
                    L = tmp;
                    ans += cnt;
                    break;
                }
            }
            if(cnt == 0) {
                int tmp = L;
                while(true) {
                    tmp--; cnt++;
                    if(tmp < 1) tmp += n;
                    if(tmp == t.at(i)) {
                        L = tmp;
                        ans += cnt;
                        break;
                    }
                }
            }
        } else {
            int tmp = R;
            while(true) {
                tmp--; cnt++;
                if(tmp < 1) tmp += n;
                if(tmp == L) {
                    cnt = 0;
                    break;
                }
                if(tmp == t.at(i)) {
                    R = tmp;
                    ans += cnt;
                    break;
                }
            }
            if(cnt == 0) {
                int tmp = R;
                while(true) {
                    tmp++; cnt++;
                    if(tmp > n) tmp -= n;
                    if(tmp == t.at(i)) {
                        R = tmp;
                        ans += cnt;
                        break;
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}