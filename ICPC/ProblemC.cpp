#include <iostream>
#include <set>
using namespace std;

int main()
{
    set <int> a, b;
    int arr[10];
    int res = 0;
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        a.insert(arr[i]);
    }
    /*if(a.size() == 1) {
        cout << arr[0];
        return 0;
    }
    if(a.size() == 2) {
        for(auto& elem: a) {
            res += elem;
        }
        cout << res;
        return 0;
    }*/
    int prev = *a.begin();
    for(auto& elem: a) { //calc diff
        if(elem - prev != 0) {
            b.insert(elem - prev);
            prev = elem;
        }
    }
    int diff = *b.cbegin();
    int sum = *a.cbegin();
    prev = *a.cbegin();
    bool first = true;
    for(auto& curr: a) {
        if(first) {
            first = false;
            continue;
        }
        if(prev + diff != curr) {
            for(int i = prev + diff; i <= curr; i += diff) {
                sum += i;
            }
        } else {
            sum += curr;
        }
        prev = curr;
    }
    cout << sum;
    return 0;
}
