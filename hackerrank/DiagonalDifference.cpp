#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n; cin >> n;
    int left = 0, right = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int temp; cin >> temp;
            if (i == j) left += temp;
            if (j == n-1-i) right += temp;
        }
    }
    cout << abs(left - right) << "\n";
    return 0;
}