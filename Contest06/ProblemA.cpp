#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    int a[n];
    int v = n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + sizeof(a) / sizeof(a[0]));
    
    int i = 0;
    while(a[i] * 2 <= a[n - 1]) { // && i < n / 2 mb
        i++;
    }
    int j = 0;
    while(a[j] <= a[i] && i < n) { //starting from biggest of less than half of actual biggest
        v--;
        j++;
        i++;
    }
    int f = n;
    for(int i = 0, j = n / 2; i < n / 2 && j < n; i++, j++) { //divide to two
        if(a[i] * 2 <= a[j]) {
            f--;
        }
    }
    cout << v; // or f
    // third way is 
//     int i = 0;
//     while(a[i] * 2 <= a[n - 1]) {
//         i++;
//         v--;
//     }
   //fourth way
    //idk search up in codeforces
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
