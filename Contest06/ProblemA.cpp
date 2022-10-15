#include <bits/stdc++.h>
 
using namespace std;
 
int main() //passes til test 21 time limit
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    int a[n];
    bool b[n] = {false};
    int r = n;
    int l = n / 2; 
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + sizeof(a) / sizeof(a[0]));
    for(int i = 0; i < n / 2; i++) {
        for(int j = l; j < n; j++) {
            if(a[i] * 2 <= a[j] && !b[j]) {
                b[j] = true;
                l = j + 1;
                r--;
                break;
            }
        }
    }
    cout << r;
    return 0;
}
