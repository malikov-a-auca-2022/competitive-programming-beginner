
#include <bits/stdc++.h>
using namespace std;

vector<bool> isPrime;
vector<int> prefixSums;

void sieve(int n) {
    isPrime = vector<bool>(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i <= sqrt(n); i++) {
        if(isPrime[i]) {
            for(int j = i*i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

void solve(int n) {
    int p = prefixSums[n];
    
    double ans = fabs(p - n/log(n)) / p * 100.0;
    
    cout << fixed << setprecision(1) << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    sieve(1e8);
    
    prefixSums = vector<int>(1e8+1);
    for(int i = 1; i <= 1e8; i++) {
        prefixSums[i] = prefixSums[i-1] + isPrime[i];
    }
    
    int t = 1;
    while(cin >> t && t) {
        solve(t);
    }
    return 0;
}
