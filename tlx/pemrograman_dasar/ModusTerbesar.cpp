#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> arr(1001);
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        arr[x]++;
    }
    int max = 1;
    for (int i = 2; i < arr.size(); i++) {
        if (arr[i] >= arr[max]) max = i;
    }
    cout << max << "\n";



    return 0;
}