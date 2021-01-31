#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr;
    int n;
    while (cin >> n) {
        arr.push_back(n);
    }
    for (int i = arr.size() - 1; i >= 0; i--) {
        cout << arr[i] << "\n";
    }

    return 0;
}