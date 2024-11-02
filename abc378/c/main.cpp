#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    rep(i, n) {
        int tmp; cin >> tmp;
        a.at(i) = {tmp, i};
    }
    vector<int> b(n, -1);
    sort(all(a));

    for(int i=1; i<n; ++i) {
        if(a.at(i-1).first == a.at(i).first) {
            b.at(a.at(i).second) = a.at(i-1).second+1;
        }
    }

    rep(i, n) {
        cout << b.at(i) << " ";
    }
    cout << endl;
    return 0;
}