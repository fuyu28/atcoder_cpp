#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    string S;
    cin >> S;

    int upper_cnt = 0;
    for (auto v : S) {
        if (isupper(v)) {
            ++upper_cnt;
        }
    }
    int lower_cnt = sz(S) - upper_cnt;
    if (lower_cnt < upper_cnt) {
        for (int i = 0; i < sz(S); ++i) {
            if (islower(S.at(i))) {
                S.at(i) = toupper(S.at(i));
            }
        }
    }
    else {
        for (int i = 0; i < sz(S); ++i) {
            if (isupper(S.at(i))) {
                S.at(i) = tolower(S.at(i));
            }
        }
    }
    cout << S << endl;
    return 0;
}