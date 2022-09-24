
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, k;
    cin >> n >> k;
    
    int h = 240 - k;
    int i = 1;
    
    for(i; i < n; i++) {
        if(h > 0 && h > i * 5) h -= i * 5; 
        else break;
    }
    if(h < i * 5) i--;
    cout << i;
    
    return 0;
}
