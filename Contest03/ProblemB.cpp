
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int numberOfRecipes; cin >> numberOfRecipes;
    int minToAllow; cin >> minToAllow;
    int numberOfQuestions; cin >> numberOfQuestions;
    int recipes [numberOfRecipes][2] = {{0}, {0}};
    
    for(int i = 0; i < numberOfRecipes; i++) {
        cin >> recipes[i][0];
        cin >> recipes[i][1];
    }
    int n = 2e5 + 1;
    int allowedTemperatures [n] = {0};
    bool isAllowed [n] = {false};
    
    for(int i = 0; i < numberOfRecipes; i++) { //count allowed temperatures
        for(int j = recipes[i][0]; j <= recipes[i][1]; j++) {
            if(!isAllowed[j]) allowedTemperatures[j]++; 
            if(allowedTemperatures[j] >= minToAllow) isAllowed[j] = true;
        }
    }
    
    for(int i = 0; i < numberOfQuestions; i++) { //answer to questions
        int low; cin >> low;
        int high; cin >> high;
        int count = 0;
        for(int j = low; j <= high; j++) { // j <= maxtemp
            if(isAllowed[j]) count++; 
        }
        cout << count << '\n';
    }
    return 0;
}
