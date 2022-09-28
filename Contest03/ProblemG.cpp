#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int curr; cin >> curr;
    int prev; prev = curr;
    int maxLength = 1;
    bool gotFirstHalf = false;
    
    for(int i = 1; i < n; i++) {
        cin >> curr;
        if(curr == prev) maxLength++;
        else gotFirstHalf = true;
        if(gotFirstHalf) {
            maxLength = 0;
        }
    }
    
    cout << maxLength * 2;
    return 0;
}
