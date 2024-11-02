#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int n, c;
    cin >> n >> c;
    int last = 0;
    int ans = 0;
    rep(i, n) {
        int a;
        cin >> a;
        if (i == 0){
            ans++;
            last = a;
        }
        if(a - last >= c) {
            ans++;
            last = a;
        }
    }
    cout << ans<< endl;
    return 0;
}