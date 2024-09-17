#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int N, X, A[100000];

int search(int x) {
    int L = 1, R = N;
    while(L <= R) {
        int M = (L + R) / 2;
        if (x < A.at(M)) R = M - 1;
        if (x == A.at(M)) return M;
        if (x > A.at(M)) L = M + 1;
    }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin >> N >> X;
    rep(i, N) cin >> A.at(i);

    int Answer = search(X);
    cout << Answer << endl;
    return 0;
}