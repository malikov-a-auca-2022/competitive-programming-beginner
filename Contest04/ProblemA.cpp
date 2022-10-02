#include <bits/stdc++.h>
using namespace std;

string input;
char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int contains[26];

void isCorrect() {
    bool con[26];
    for(int i = 0; i < 26; i++) {
        for(int j = 0;)
    }
}
void solve() {
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> input;
    for(int i = 0; i < 26; i++) { //
        char curr = input[i];
        for(int j = 0; j < 26; j++) {
            if(curr = alphabet[j]) contains[j]++;
        }
    }
    solve();
    return 0;
} //26 letters, multiple occurances error
//sizeof(input) - 26 + 1 substrings
