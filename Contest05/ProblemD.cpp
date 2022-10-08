#include <bits/stdc++.h> 
using namespace std;
void solve() {
    int n; cin >> n;
    vector<vector<int>> h(2, vector<int>(n)); 
    for (int r = 0; r < 2; r++)
        for (int i = 0; i < n; i++) {   
            cin >> h[r][i];
        }
    vector<vector<long long>> dp(2, vector<long long>(n));
    dp[0][0] = h[0][0];
    dp[1][0] = h[1][0];
    for (int i = 1; i < n; i++) {
        dp[0][i] = max(dp[0][i-1], h[0][i] + dp[1][i-1]); 
        dp[1][i] = max(dp[1][i-1], h[1][i] + dp[0][i-1]);
    }
    cout << max(dp[1][n-1], dp[0][n-1]) << endl;
}
int main() {
    ios::sync_with_stdio(false); 
    cin.tie(0);
    int t = 1;
    // cin » t; 
    while (t--) { 
        solve();
    }
    return 0;
}
