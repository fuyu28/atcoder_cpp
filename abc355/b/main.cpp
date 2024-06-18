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
    vector<int> A(N), B(M);
    for (auto& x : A) cin >> x;
    for (auto& x : B) cin >> x;

    auto C = A;
    for (auto x : B) C.push_back(x);
    sort(all(C));

    set<int> st(all(A));

    rep(i, N + M - 1) {
        if (st.count(C.at(i)) && st.count(C.at(i+1))) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}