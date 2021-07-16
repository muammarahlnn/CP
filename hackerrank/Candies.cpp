#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> arr(n), amounts(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i+1]) {
            amounts[i]++;
            amounts[i+1] = amounts[i] + 1;
        } else if (arr[i] > arr[i+1]) {
            // amounts[i] = 
            // amounts[i+1] = 
        } else {
            // amounts[i] = 
            // amounts[i+1] = 
        }
    }
    return 0;
}