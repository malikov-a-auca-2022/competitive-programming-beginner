#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    map <char, int> m;
    for(int i = 0; i < n; i++) {
        m[ s[i] ]++;
    }

    return 0;
}
