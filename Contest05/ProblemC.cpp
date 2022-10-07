#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s; cin >> s;
    long long c = 0;
    for(int l = 0; l < s.size() - 1; l++) {
        if(s[l] == 'v' && s[l + 1] == 'v') {
            for(int o = l; o < s.size(); o++) {
                if(s[o] == 'o') {
                    for(int r = o; r < s.size() - 1; r++) {
                        if(s[r] == 'v' && s[r + 1] == 'v') {
                            c++;
                        }
                    }
                }
            }
        }
    }
    cout << c;
    return 0; 
}
