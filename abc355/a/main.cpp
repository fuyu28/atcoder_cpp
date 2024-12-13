#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int A, B;
    cin >> A >> B;
    int ans = -1;
    if (A != B) {
        for (int i = 1; i < 4; ++i) {
            if (i != A && i != B) ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}