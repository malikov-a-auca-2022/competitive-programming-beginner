#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    int a[n];
    map <int, int> c;
    int r = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        c[a[i]]++;
    }
    for (auto i = c.rbegin(); i != c.rend(); i++) {
        while(i->first % 2 == 0 && i->second) {
            c[i->first/2] += i->second;
            c[i->first] = 0;
            r++;
        }
    }
    cout << r << '\n';
}

int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
