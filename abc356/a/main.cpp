#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N, L, R;
    cin >> N >> L >> R;

    vector<int> num;
    for (int i = 1; i < N + 1; ++i) {
        num.push_back(i);
    }

    reverse(num.begin() + L - 1, num.begin() + R);

    for (int i = 0; i < num.size(); i++) cout << num.at(i) << " ";
    cout << endl;
    return 0;
}
