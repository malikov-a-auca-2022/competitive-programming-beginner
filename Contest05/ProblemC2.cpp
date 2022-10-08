#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s; cin >> s;
    long long right = 0, left = 0, ans = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s.substr(i, 2) == "vv") {
            right++;
        }
    }
    for(int i = 0; i < s.size() && right != 0; i++) {
        if(s.substr(i, 2) == "vv") {
            right--;
            left++;
        }
        if(s[i] == 'o') {
            ans += right * left;
        }
    }
    cout << ans;
    return 0;
}
