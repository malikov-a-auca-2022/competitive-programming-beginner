#include <iostream>
#include <cmath>

using namespace std;
void solve() {
    long long n, m;
    cin >> n; cin >> m;
    long long rooms[n];
    long long pref[n];
    long long lo = 0, hi = n - 1;
    long long mid;
    
    for(int i = 0; i < n; i++) {
        cin >> rooms[i];
        pref[i] = !i ? rooms[i] : pref[i - 1] + rooms[i];
    }
    
    for(int i = 0; i < m; i++) {        //ask question and answer
        hi = n - 1;
        mid = (lo + hi) / 2;
        long long b; cin >> b;
        while(true) {
            mid = (lo + hi) / 2;
            if(b == pref[n - 1]) {
                cout << n << " " << rooms[n - 1] << '\n';
                break;
            }
            if(pref[mid] == b) {
                cout << mid + 1 << " " << rooms[mid] << '\n';
                break; 
            }
            if(pref[mid + 1] > b && b > pref[mid]) {
                cout << mid + 2 << " " << b - pref[mid] << '\n';
                break;
            }
            if(pref[mid] > b && b > pref[mid - 1]) {
                cout << mid + 1 << " " << rooms[mid] - pref[mid] + b << '\n';
                break;
            }
            if(mid == lo) {
                cout << mid + 1 << " " << b << '\n';
                break;
            }
            if(mid == hi) {
                cout << mid + 1 << " " << rooms[mid] << '\n';
                break;
            }
            if(b > pref[mid]){
                lo = mid + 1;
            } else {
                hi = mid;
            }
        } 
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    solve();

    return 0;
}
