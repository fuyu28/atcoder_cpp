#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    string S, T;
    vector<string> X;
    cin >> S >> T;
    int i = 0;

    while (S != T) {
        while(sz(S) > i+1) {    
            if (S.at(i) != T.at(i)) {
                S = S.substr(0, i) + T.at(i) + S.substr(i+1);
                X.push_back(S);
            }
            i++;
        }
    }

    cout << X.size() << endl;
    rep(i, X.size()) cout << X.at(i) << endl;
    return 0;
}