#include <bits/stdc++.h>
using namespace std;

int main() {
    string S,T;
    cin >> S >> T;
    vector<int> Answer;
    int h = 0;
    for (int i = 0; i < S.size(); i++) {
        for (int j = h; j < T.size(); j++) {
            if (S.at(i) == T.at(j)) {
                Answer.push_back(j);
                h = j + 1;
                break;
            }
        }
    }
    for (int i=0;i<Answer.size();i++) {
        cout << Answer.at(i) + 1;
        if (i != Answer.size() - 1) cout << " ";
        else cout << endl;
    }
    return 0;
}