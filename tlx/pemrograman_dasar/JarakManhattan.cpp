#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout << abs(x1 - x2) + abs(y1 - y2) << "\n";   

    return 0;
}