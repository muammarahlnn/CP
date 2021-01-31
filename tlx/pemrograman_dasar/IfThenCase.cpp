#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n; cin >> n;
    if (n >= 10000) cout << "puluhribuan" << "\n";
    else if (n >= 1000) cout << "ribuan" << "\n";
    else if (n >= 100) cout << "ratusan" << "\n";
    else if (n >= 10) cout << "puluhan" << "\n";
    else cout << "satuan" << "\n";

    return 0;
}