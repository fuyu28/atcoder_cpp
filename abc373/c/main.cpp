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
    vector<int> A(N), B(N);
    rep(i, N) cin >> A[i];
    rep(i, N) cin >> B[i];

    int A_max = 0, B_max = 0;
    rep(i, N) {
        A_max = max(A_max, A[i]);
        B_max = max(B_max, B[i]);
    }
    cout << A_max + B_max << endl;
    return 0;
}