#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    double n; cin >> n;
    if (fmod(n, 1) == 0) cout << n << " " << n << "\n";
    else if (n < 0) cout << trunc(n) - 1 << " " << trunc(n) << "\n";
    else cout << trunc(n) << " " << trunc(n) + 1 << "\n";
    
    return 0;
}