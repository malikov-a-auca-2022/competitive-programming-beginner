#include <bits/stdc++.h>
 
using namespace std;
 
string alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string exmp = "ABABABBAB????????????ABABABABA???????????ABABABABA?????????KLCSJB?????????Z";
 
void solve() {
    string s; cin >> s;
    if(s.size() < 26) {
        cout << "-1";
        return;
    }
    bool shouldSkip, isIncluded[26];
    int c, b, l, r; //c is counter of letters, b is counter of non-repeating letters, l is left, r is right 
    for(l = 0; l < s.size() - 23; l++) { //23 yyyyy not 24
        shouldSkip = false;
        fill(begin(isIncluded), end(isIncluded), false);
        c = 0, b = 0;
        for(int r = l; r < l + 26; r++) { //calculate isIncluded // 26 yyyyy not 25
            if(s[r] != '?') {
                c++;
            }
            for(int i = 0; i < 26; i++) {
                if(s[r] == alph[i]) {
                    if(!isIncluded[i]) {
                        isIncluded[i] = true;
                    } else {
                        l = r - 1; // r-1 because l++ at the end of iteration
                        shouldSkip = true;
                    }
                    break;
                }
            }
            if(shouldSkip) {
                break;
            }
        }
        for(int i = 0; i < 26; i++) {
            if(isIncluded[i]) {
                b++;
            }
        }
        if(b == c) {
            for(int i = l; i < l + 26; i++) {
                if(s[i] == '?') {
                    for(int j = 0; j < 26; j++) {
                        if(!isIncluded[j]) {
                            s[i] = alph[j];
                            isIncluded[j] = true;
                            break;
                        }
                    }
                }
            }
            for(int i = 0; i < s.size(); i++) {
                if(s[i] == '?') {
                    s[i] = 'A';
                }
            }
            cout << s;
            return;
        }
    }
    cout << "-1";
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
