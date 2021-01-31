#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n, k; cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        if (i % k == 0) cout << "*";
        else cout << i;
        cout << " ";
    }   

    return 0;
}