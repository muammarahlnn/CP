#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 

    int n; cin >> n;
    vector<int> arr(++n);
    for (int i = 1; i < n; i++) {
        int x; cin >> x;
        arr[x] = i;
    }
    for (int i = 1; i < n; i++) {
        cout << arr[arr[i]] << "\n";
    }
    
    return 0;
}