
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int numberOfRecipes; cin >> numberOfRecipes;
    int min; cin >> min;
    int questions; cin >> questions;
    
    int recipes [numberOfRecipes][2];
    for(int i = 0; i < numberOfRecipes; i++) {
        cin >> recipes[i][0];
        cin >> recipes[i][1];
    }

    return 0;
}
