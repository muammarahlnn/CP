#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int arr[5];
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 5);
    long long min = 0, max = 0;
    for (int i = 0, j = 1; i < 4 && j < 5; i++, j++) {
        min += arr[i];
        max += arr[j];
    }
    cout << min << " " << max << "\n";
    return 0;
}