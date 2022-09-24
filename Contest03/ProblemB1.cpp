
#include <bits/stdc++.h>

using namespace std;
void solve(){
    int n, k, q;
    cin >> n >> k >> q;
    
    vector<int> v(200001);
    for(int i = 0; i < n; i++) {
        int l , r; cin >> l >> r;
        v[l]++;
        v[r + 1]--;
    }
    for(int i = 1; i < v.size(); i++) {
        v[i] += v[i - 1];
    }
    for(int i = 0; i < v.size(); i++) {
        v[i] = (v[i] >= k);
    }
    for(int i = 1; i < v.size(); i++) {
        v[i] += v[i - 1];
    }
    for(int i = 0; i < q; i++) {
        int a, b; cin >> a >> b;
        cout << v[b] - v[a-1] << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    solve();
    
    return 0;
}
