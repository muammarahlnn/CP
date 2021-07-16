#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<int>> arr(3, vector<int>(3));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    vector<vector<int>> magic = {
        {4,9,2,3,5,7,8,1,6},
        {4,3,8,9,5,1,2,7,6},
        {2,9,4,7,5,3,6,1,8},
        {2,7,6,9,5,1,4,3,8},
        {8,1,6,3,5,7,4,9,2},
        {8,3,4,1,5,9,6,7,2},
        {6,7,2,1,5,9,8,3,4},
        {6,1,8,7,5,3,2,9,4}
    };

    int temp = 0, ans = INT_MAX;
    for (int i = 0; i < 8; i++) {
        temp = abs(arr[0][0] - magic[i][0]) 
            + abs(arr[0][1] - magic[i][1]) 
            + abs(arr[0][2] - magic[i][2]) 
            + abs(arr[1][0] - magic[i][3]) 
            + abs(arr[1][1] - magic[i][4]) 
            + abs(arr[1][2] - magic[i][5]) 
            + abs(arr[2][0] - magic[i][6]) 
            + abs(arr[2][1] - magic[i][7]) 
            + abs(arr[2][2] - magic[i][8]);
        
        ans = min(ans, temp);
    }
    cout << ans << "\n";
    
    return 0;
}