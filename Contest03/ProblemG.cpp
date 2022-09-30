#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin >> n;
    int curr; cin >> curr;
    vector<int> subseqs;
    subseqs.push_back(1);
    int prev = curr;
    for(int i = 1; i < n; i++) {
        cin >> curr;
        if(curr == prev) subseqs.back()++;
        else {
            subseqs.push_back(1);
            prev = curr;
        }
    }
    int max1, max2;
    for(int i = 0; i < subseqs.size(); i++) {
        if(i % 2 == 0) max1 = subseqs[i];
        else max2 = subseqs[i];
    }
    cout << min(max1, max2) * 2;
}
