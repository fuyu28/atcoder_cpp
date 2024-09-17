#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    string S, T;
    cin >> S >> T;
    bool ans = false;
    string S_;

    for (int w = 1; w < sz(S); ++w) {
        for (int c = 1; c <= w; ++c) {
            if(w == c) {
                if(w != 1) {
                    rep(i, sz(S) / w) {
                        S_.push_back(S.at(w * i + 1));
                    }
                }
                else S_ = S;
            } else {
                copy(S.begin() + sz(S) % w, S.end(), back_insert_iterator(S_));
            }
            rep(i, sz(S_)) {
                if(sz(S_) != sz(T)) break;
                if(S_.at(i) != T.at(i)) break;
                if(i == sz(S_) - 1) ans = true;
            }
            S_.erase(all(S_));
        }
    }
    
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}