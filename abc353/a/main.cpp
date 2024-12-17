#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N;
    int res = -1;
    cin >> N;
    vector<int> H(N+1,0);

    for (int i = 0; i < N; ++i) {
        cin >> H.at(i);
    }
    int Hmax = H.at(0);

    for (int i = 0; i < N; ++i) {
        if (H.at(0) < H.at(i)) {
            res = i;
            break;
        }
    }

    if (res == -1) cout << res << endl;
    else cout << res + 1 << endl;
    return 0;
}