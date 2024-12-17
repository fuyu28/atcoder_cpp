#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N;
    cin >> N;
    ll sum = 0;

    vector<string> user(N);
    for (int i = 0; i < N; ++i) {
        int M;
        cin >> user.at(i) >> M;
        sum += M;
    }

    sort(user.begin(),user.end());
    cout << user.at(sum % N) << endl;
    return 0;
}