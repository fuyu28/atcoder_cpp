#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N, M;
    cin >> N >> M;
    vector<int> A(M);
    vector<string> B(M);
    rep(i, M) cin >> A[i] >> B[i];

    vector<int> cnt(N + 1);

    for (int i=0; i<M; i++) {
        if (B[i] == "M") {
            if (cnt[A[i]] == 0) cout << "Yes" << endl;
            else cout << "No" << endl;
            cnt[A[i]]++;
        }
        else cout << "No" << endl;
    }

    return 0;
}