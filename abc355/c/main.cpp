#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int N, T;
    cin >> N >> T;
    vector<int> A(T);
    for(auto& x : A) cin >> x;
    
    vector<int> row(N, 0);
    vector<int> col(N, 0);
    int d1 = 0, d2 = 0;
    int ans = -1;

    rep(i, T) {
        int r = (A.at(i) - 1) / N;
        int c = (A.at(i) - 1) % N;
        ++row.at(r);
        ++col.at(c);
        if(r == c) ++d1;
        if(r + c == N - 1) ++d2;

        if(row.at(r) == N or col.at(c) == N or d1 == N or d2 == N) {
            ans = i + 1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}