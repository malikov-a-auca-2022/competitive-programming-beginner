#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    map <int, int> c;
    int r = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        c[a[i]]++;
    }
    for (auto const& [key, val] : c)
    {
        if(key > val) {
            r += val;
        } else if(key < val) {
            r += val - key;
        }
    }
    cout << r;
    return 0;
}
