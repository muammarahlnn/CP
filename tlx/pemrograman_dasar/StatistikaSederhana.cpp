#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n; cin >> n;
    int min = 100000, max = -100000;
    for (int i = 0; i < n; i++) {
        int temp; cin >> temp;
        if (temp < min) min = temp;
        if (temp > max) max = temp;
    }   
    cout << max << " " << min << "\n";

    return 0;
}