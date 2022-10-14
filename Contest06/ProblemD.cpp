#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n; cin >> n;
    int m; cin >> m;
    map<string, string> s;
    for(int i = 0; i < n; i++) {
        string name; cin >> name;
        string id; cin >> id;
        s[id] = name;
    }
    for(int i = 0; i < m; i++) {
        string command; cin >> command;
        string id; cin >> id;
        id.pop_back();
        cout << command << " " << id << "; #" << s[id] << '\n';
    }
}

int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
