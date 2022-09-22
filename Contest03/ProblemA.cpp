#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<long long> pr(n);
    pr[0] = v[0];
    for(int i = 1; i < n; i++) {
        pr[i] = pr[i-1] + v[i];
    }
    
    int q; cin >> q;
    for(int i = 0; i < q; i++) {
        int l, r; cin >> l >> r;
        if(l == 0) cout << pr[r] << endl;
        else cout << pr[r] - pr[l-1] << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    solve();

    return 0;
}
