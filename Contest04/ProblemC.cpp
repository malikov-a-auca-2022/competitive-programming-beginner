#include <bits/stdc++.h>

using namespace std;

string alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string alp2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZX";
string exmp = "ABABABBAB????????????ABABABABA???????????ABABABABA?????????KLCSJB?????????Z";
string cran = "ABABABBABAAAAAAAAAAAAABABABABAAAAAAAAAAAAABABABABADEFGHIMNOKLCSJBPQRTUVWXYZ";

void solve2() {
    bool isIncluded[26] = {false};
    string s; cin >> s;
    if(s.length() < 26) {
        cout << "-1" << endl;
    }
    int l = 0, r = 0;
    string s2;
    int lCountInBool = 0, lCount = 0; 
    for(l; l < s.length() - 24; l++) {
        s2 = s.substr(l, 26);
        for(r = l; r < l + 25; r++) {
            for(int i = 0; i < 26; i++) { 
                if(s[r] == alph[i]) {
                    if(isIncluded[i]) {
                        for(int i = 0; i < 26; i++) isIncluded[i] = false; //we need to move it
                        l = r;
                    } else {
                        lCount++;
                        isIncluded[i] = true;
                    }
                    break;
                }
            }
        }
        for(int i = 0; i < 26; i++) {
            if(isIncluded[i]) {
                lCountInBool++;
            }
        }
        if(lCountInBool == lCount) {
            for(int i = 0; i < 26; i++) {
                if(s2[i] == '?') {
                    for(int j = 0; j < 26; j++) {
                        if(!isIncluded[j]) {
                            s2[i] = alph[j];
                            isIncluded[j] = true;
                            break;
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
            cout << s;
            return;
        }
    }
    cout << "-1";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve2();
    return 0;
}
