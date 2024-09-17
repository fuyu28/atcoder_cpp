#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int a, b;
    cin >> a >> b;
    int cnt = 0;

    for (int i = -100; i <= 200; ++i){
        if (a - i == b - a) {
            ++cnt;
            continue;
        }
        if (i - a == b - i) {
            ++cnt;
            continue;
        }
        if (b - a == i - b) {
            ++cnt;
            continue;
        }
    }
    cout << cnt << endl;
    return 0;
}