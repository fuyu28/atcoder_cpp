#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

vector<int> a = {1, 14, 32, 51, 51, 51, 243, 419, 750, 910};

bool isOK(int index, int key) {
    if (a[index] >= key) return true;
    else return false;
}

int binary_search(int key) {
    int left = -1;
    int right = (int)sz(a);

    while (right - left > 1) {
        int mid = left + (right - left) / 2;
        if (isOK(mid, key)) right = mid;
        else left = mid;
    }
    return right;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cout << binary_search(51) << endl;
    return 0;
}