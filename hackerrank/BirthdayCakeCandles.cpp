#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n; cin >> n;
    int max = 1;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int temp; cin >> temp;
        if (temp > max) max = temp;
        arr.push_back(temp);
    }
    int ans = 0;
    for (auto i = arr.begin(); i != arr.end(); i++) {
        if (max == *i) ans++;
    }
    cout << ans << "\n";

    return 0;
}