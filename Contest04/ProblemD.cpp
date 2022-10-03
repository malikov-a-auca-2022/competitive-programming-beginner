#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    char curr = s[0];
    vector<int> subseqs;
    subseqs.push_back(1);
    int prev = curr;
    for(int i = 1; i < n; i++) {
        curr = s[i];
        if(curr == prev) subseqs.back()++;
        else {
            subseqs.push_back(1);
            prev = curr;
        }
    }
    for(int i = 0; i < sizeof(subseqs); i++) {
        cout << subseqs[i] << " ";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
} 
