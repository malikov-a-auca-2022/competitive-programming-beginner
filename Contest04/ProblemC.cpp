#include <bits/stdc++.h>

using namespace std;

string alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZX";
string ans2 = "ABABABBABCDEFGHIJKLMNABABABABAOPQRSTUVWXYABABABABAZ????????KLCSJB?????????Z";
string exmp = "ABABABBAB????????????ABABABABA???????????ABABABABA?????????KLCSJB?????????Z";
string cran = "ABABABBABAAAAAAAAAAAAABABABABAAAAAAAAAAAAABABABABADEFGHIMNOKLCSJBPQRTUVWXYZ";

void solve2() {
    bool isIncluded[26] = {false};
    string s; cin >> s;
    if(s.size() < 26) {
        cout << "-1" << endl;
    }
    int l = 0, r = 25;
    string s2;
    for(l, r; l < s.size() - 26 + 1; l++) {
        
    }
}
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
            if(s[r] == alph[i] && isIncluded[i]) { //idk this method passes some testcases
                l++;
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
    solve2();
    return 0;
}
