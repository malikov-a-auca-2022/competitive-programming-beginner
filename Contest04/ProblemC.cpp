#include <bits/stdc++.h>

using namespace std;

string alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string exam = "ABCABC??FGHIJK???OPQR?TUVWXY?";

void solve() {
    bool isIncluded[26] = {false};
    string s; cin >> s;
    if(s.size() < 26) {
        cout << "-1" << endl;
        return;
    }
    int l = 0, r = 0;
    for(r, l; r < s.size(); r++) {
        for(int i = 0; i < 26; i++) {
            if(s[r] == alph[i] && isIncluded[i]) { //this part is wrong
                l = r;
                break;
            }
            if(!isIncluded[i] && (s[r] == alph[i] || s[r] == '?')) {
                s[r] = alph[i];
                isIncluded[i] = true;
                break;
            }
        }
    }
    if(r - l == 26) cout << s;
    else cout << "-1";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
