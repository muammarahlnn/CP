#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n; cin >> n;
    if (n > 0) cout << "positif" << "\n";
    else if (n < 0) cout << "negatif" << "\n";
    else cout << "nol" << "\n";
    return 0;
}