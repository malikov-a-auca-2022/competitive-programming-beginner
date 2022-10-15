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
    if(a.size() == 1) {
        cout << arr[0];
        return 0;
    }
    int prev = *a.begin();
    for(auto& elem: a) { //calc diff
        if(elem - prev != 0) {
            b.insert(elem - prev);
            prev = elem;
        }
    }
    int diff = *b.cbegin();
    int l = *a.cbegin();
    int r = *a.crbegin();
    for(int i = l; i <= r; i += diff) {
        res += i;
    }
    cout << res;
    return 0;
}
