#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(M);
    for (auto& v : A) cin >> v;
    for (auto& v : B) cin >> v;

    sort(all(A));
    sort(all(B));

    bool ans = false;
    set<int> C;
    int cnt = 0;

    for (int i : A) C.insert(i);
    for (int i : B) C.insert(i);

    for (int i = 0; i < N+M-1; ++i) {
        if (A)
    }

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}