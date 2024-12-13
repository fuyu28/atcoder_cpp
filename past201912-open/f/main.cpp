#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;

int main() {
    
    string S;
    cin >> S;

    vector<string> words;

    for (int i = 0; i < sz(S);){
        int j = i + 1;
        while (j < sz(S) && islower(S.at(j))) {
            ++j;
        }
        string word = S.substr(i, j + 1 - i);

        word.at(0) = tolower(word.at(0));
        word.back() = tolower(word.back());

        words.push_back(word);
        i = j + 1;
    }

    sort(all(words));

    string result = "";
    for(auto word : words) {
        word.at(0) = toupper(word.at(0));
        word.back() = toupper(word.back());

        result += word;
    }
    cout << result << endl;

    return 0;
}