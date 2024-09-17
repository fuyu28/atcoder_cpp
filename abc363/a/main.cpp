#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int a, ans;
    cin >> a;
    
    if (a < 100) ans = 100 - a;
    else if (a < 200) ans = 200 - a;
    else if (a < 300) ans = 300 - a;

    cout << ans << endl;
     
    return 0;
}