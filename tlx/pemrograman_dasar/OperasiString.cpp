#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    s1.erase(s1.find(s2), s2.size());
    s1.insert(s1.find(s3) + s3.size(), s4);
    cout << s1 << "\n";
}