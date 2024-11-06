#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    cin >> N;
    int answer = 0;
    for (int i=0;i<N.size();i++) {
        int keta;
        int kurai = (1 << (N.size() - 1 - i));
        if (N.at(i) == '0') keta = 0;
        if (N.at(i) == '1') keta = 1;
        answer += keta * kurai;
    }
    cout << answer << endl;
    return 0;
}