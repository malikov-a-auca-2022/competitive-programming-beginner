#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin >> n;
    long v[n]; cin >> v[0];
    long long pref1[n]; pref1[0] = v[0];
    long long pref2[n];

    for(int i = 1; i < n; i++) {
        cin >> v[i];
        pref1[i] = pref1[i - 1] + v[i];
    }
    int s = sizeof(v) / sizeof(v[0]);
    sort(v, v + s);
    pref2[0] = v[0];
    for(int i = 1; i < n; i++) {
        pref2[i] = pref2[i - 1] + v[i];
    }
    int m; cin >> m;
    for(int i = 0; i < m; i++) {
        int type, l, r; cin >> type >> l >> r;
        if(type == 1) {
            long long res = l == 1 ? pref1[r - 1] : pref1[r - 1] - pref1[l - 2];
            cout << res << endl;
        } else {
            long long res = l == 1 ? pref2[r - 1] : pref2[r - 1] - pref2[l - 2];
            cout << res << endl;
        }
    }
    return 0; 
}
