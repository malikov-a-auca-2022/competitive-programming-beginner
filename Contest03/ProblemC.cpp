

#include <bits/stdc++.h>

using namespace std;
void solve(){
    int n, m; 
    cin >> n >> m;
    int arr[n][n]; 
    int pref[n][n];
    int size = n - m + 1;
    int res[size][size];
    
    for(int i = n-1; i >= 0; i--) {                     //input array
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    
    for(int i = 0; i < n; i++) {                        // output array in table form
        for(int j = 0; j < n; j++) {            
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    
    
    for(int i = 0; i < n; i++) {                        //calculating prefix
        for(int j = 0; j < n; j++) {
            if(i == 0 && j == 0) {
                pref[i][j] = arr[i][j];
            } else if(i == 0) {
                pref[i][j] = pref[i][j-1] + arr[i][j];
            } else if(j == 0) {
                pref[i][j] = pref[i-1][j] + arr[i][j];
            } else {
                pref[i][j] = arr[i][j] + pref[i][j-1] + pref[i-1][j] - pref[i-1][j-1];
            }
        }
    }
    
    for(int i = 0; i < n; i++) {                      
        for(int j = 0; j < n; j++) {            
            cout << pref[i][j] << ' ';
        }
        cout << endl;
    }
    
    for(int i = size - 1; i >= 0; i--) {
        for(int j = 0; j < size; j++) {
            if(i == size - 1 && j == 0) {
                res[i][j] = pref[i][j+m - 1] - pref[i-m][j-m];
            } else if(i == size - 1) {
                
            }
            res[i][j] = pref[i][j+m - 1] - pref[i][j] - pref[i-m][j - 1] + pref[i-m][j - 1];
        }
    }
    
    cout << endl;
    for(int i = 0; i < size; i++) {                        
        for(int j = 0; j < size; j++) {            
            cout << res[i][j] << ' ';
        }
        cout << endl;
    }
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}
