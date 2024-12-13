#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int N;
    cin >> N;
    vector<int> A(2*N);
    for (auto& x : A) cin >> x;
    int cnt=0;

    rep(i, 2*N-2) {
        if(A.at(i) == A.at(i+2)) ++cnt;
    }
    cout << cnt << endl;
    return 0;
}