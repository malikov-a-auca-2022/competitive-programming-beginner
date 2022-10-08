#include <bits/stdc++.h>

using namespace std;

string alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string alp2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZX";
string ans2 = "ABABABBABCDEFGHIJKLMNABABABABAOPQRSTUVWXYABABABABAZ????????KLCSJB?????????Z";
string exmp = "ABABABBAB????????????ABABABABA???????????ABABABABA?????????KLCSJB?????????Z";
string cran = "ABABABBABAAAAAAAAAAAAABABABABAAAAAAAAAAAAABABABABADEFGHIMNOKLCSJBPQRTUVWXYZ";

void solve2() {
    bool isIncluded[26] = {false};
    bool isSolved = false, isSolvable = false;
    string s; cin >> s;
    if(s.size() < 26) {
        cout << "-1" << endl;
    }
    int l = 0, r = 0;
    string s2;
    for(l; l < s.size() - 25; l++) {
        int qCount = 0, lCount = 0; 
        s2 = s.substr(l, 26);
        for(r = l; r < l + 25; r++) {
            for(int i = 0; i < 26; i++) { 
                if(s[r] == alph[i]) {
                    lCount++;
                    if(isIncluded[i]) {
                        for(int i = 0; i < 26; i++) isIncluded[i] = false;
                        l = r;
                        isSolvable = false;
                    } else isIncluded[i] = true;
                    break;
                }
            }
        }
        /*for(int i = 0; i < 26; i++) {
            if(isIncluded[i]) lCount++;
        }*/
        // if(qCount == 26 - lCount) {
        if(!isSolvable) {
            continue;
        }
        for(int i = 0; i < 26; i++) {
            if(s2[i] == '?') {
                for(int j = 0; j < 26; j++) {
                    if(!isIncluded[j]) {
                        s2[i] = alph[j];
                        isIncluded[j] = true;
                    }
                }
            }
        }
        s.replace(l, 26, s2);
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '?') {
                s[i] == 'A';
            }
        }
        isSolved = true;
        break;
    }
    if(isSolved) cout << s;
    else cout << "-1";
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
