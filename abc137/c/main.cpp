#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<string, long long> num;
    for(int i = 0; i < N; ++i) {
        string s;
        cin >> s;

        sort(s.begin(), s.end());   //ソートしｓてアナグラムを同一にする

        ++num[s];   //.at()だとエラー
    }

    long long res = 0;
    for (auto v : num) {
        long long n = v.second;

        res += n * (n - 1) / 2;     //nC2を足し算
    }

    cout << res << endl;
    return 0;
}