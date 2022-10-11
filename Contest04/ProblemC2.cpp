#include <bits/stdc++.h>

using namespace std;

string alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}

void solve() {
    string s; cin >> s;
    if(s.size() < 26) {
        cout << "-1";
        return;
    }
    bool skip? = false;
    bool isIncluded[26] = {false};
    int lCount, lCountInBool;
    int l = 0, r = 0;
    for(l; l < s.size() - 24; l++) {
        lCount = 0, lCountInBool = 0;
        for(r; r < l + 25; r++) {
            for(int i = 0; i < 26; i++) {
                if(s[r] == alph[i] && !isIncluded[i]) {
                    isIncluded[i] = true;
                    lCount++;
                } else if(s[r] == alph[i] && isIncluded[i]) {
                    l = r - 1; // r-1 because l++ at the end of iteration
                    skip? = true;
                }
            }
        }
        if(skip?) {
            continue;
        }
    }
}
