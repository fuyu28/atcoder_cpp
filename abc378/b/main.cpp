#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int n;
    cin >> n;
    vector<pair<int, int>> qr(n);
    rep(i, n) {
        int q, r;
        cin >> q >> r;
        qr.at(i) = {q, r};
    }
    int Q;
    cin >> Q;
    vector<pair<int, int>> td(Q);
    rep(i, Q) {
        int t, d;
        cin >> t >> d;
        td.at(i) = {t-1, d};
    }
    for(auto [t, d] : td) {
        int day = d % qr.at(t).first;
        if(day == qr.at(t).second) {
            cout << d << endl;
        }
        if(day > qr.at(t).second) {
            cout << d + (qr.at(t).first - day) + qr.at(t).second << endl;
        }
        if(day < qr.at(t).second) {
            cout << d + qr.at(t).second - day << endl;
        }
    }
    return 0;
}