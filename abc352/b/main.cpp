#include <bits/stdc++.h>
using namespace std;

int main() {
    string S,T;
    cin >> S >> T;  //Sが正しい文字列
    vector<int> Answer;
    int i = 0;  
    for (int j = 0; j < T.size(); j++) {
        if (T.at(j) == S.at(i)) {
            Answer.push_back(j);
            i++;
        }
    }

    for (int i = 0; i < Answer.size(); i++) {
        cout << Answer.at(i) + 1;
        if (i != Answer.size() - 1) cout << " ";
        else cout << endl;
    }
    return 0;
}