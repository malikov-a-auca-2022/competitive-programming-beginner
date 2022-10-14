#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    int a[n];
    int f = n;
    bool b[n] = {false};
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + sizeof(a) / sizeof(a[0]));
    
    
    for(int i = 0; i < n - 1; i++) { 
        for(int j = i + 1; j < n; j++) {
            if(a[i] < a[j] && !b[j]) {
                f--;
                b[j] = true;
                break;
            }
        }
    }
    cout << f; 
}

int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
