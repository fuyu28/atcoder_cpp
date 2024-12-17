#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    ll H;
    cin >> H;

    ll i = 0;
    ll h = 0;
    while (true) {
        ++i;
        h += (2<<(H-1));
        if (H < h) {
            break;
        }
    }

    cout << i << endl;
    return 0;
}