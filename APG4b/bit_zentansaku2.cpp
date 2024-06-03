#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (auto& v : A) cin >> v;
    bool ans = false;

    for (int tmp = 0; tmp < (1 << 20); ++tmp) {
        bitset<20> s(tmp);
        int sum = 0;

        for (int i = 0; i < N; ++i) {
            if (s.test(i)) {
                sum += A.at(i);
            }
        }
        if (sum == K) ans = true;
    }
    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
