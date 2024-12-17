#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int findSumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int n, a, b;
    int ans = 0;
    cin >> n >> a >> b;

    for(int i = 1; i <= n; i++) {
        int sum = findSumOfDigits(i);
        if (a <= sum && sum <= b) ans += i;
    }
    cout << ans << endl;
    return 0;
}