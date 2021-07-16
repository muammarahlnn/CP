#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int temp; cin >> temp;
        if (temp % 5 >= 3 && temp >= 38) temp+= 5 - temp % 5;
        
        cout << temp << "\n";
    }

    return 0;
}