
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
    
    // solve
    int maxTemp = 1; int minTemp = 200000;
    for(int i = 0; i < numberOfRecipes; i++) { //find min and max temperatures
        for(int j = 0; j < 2; j++) {
            int temp = recipes[i][j];
            if(temp < minTemp) minTemp = temp;
            if(temp > maxTemp) maxTemp = temp;
        }
    }
    
    int countAllowedTemperatures [maxTemp + 1] = {0}; //its length is max temperature + 1
    
    for(int i = 0; i < numberOfRecipes; i++) { //count allowed temperatures
        for(int j = recipes[i][0]; j <= recipes[i][1]; j++) {
            countAllowedTemperatures[j]++;
        }
    }
    
    for(int i = 0; i < numberOfQuestions; i++) { //answer to questions
        int low; cin >> low;
        int high; cin >> high;
        int count = 0;
        for(int j = low; j <= high; j++) {
            if(countAllowedTemperatures[j] >= minToAllow) count++; 
        }
        cout << count << endl;
    }

    return 0;
}
