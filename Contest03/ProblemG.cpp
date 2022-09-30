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
    int l = 0, ans = 0;
    for(int i=1; i<subseqs.size(); i++){
        if(subseqs[i] == subseqs[i-1]){
            l = 2* subseqs[i];
            ans = max(ans,l);
        }
        else if(subseqs[i] > subseqs[i-1]){
            l = 2* subseqs[i-1];
            ans = max(ans,l);
        }
        else{
            l = 2* subseqs[i];
            ans = max(ans,l);
        }
    }
    cout<<ans<<endl;
}
