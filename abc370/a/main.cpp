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

    if (!(a == b)) {
        if(a == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else cout << "Invalid" << endl;
    return 0;
}