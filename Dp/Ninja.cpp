#include <bits/stdc++.h>
using namespace std;
int fun(vector<vector<int>> &arr, int i, int last, vector<vector<int>> &dp)
{
    if (i < 0)
        return 0;
    if (dp[i][last] != -1)
        return dp[i][last];

    int maxi = 0;
    for (int j = 0; j < 3; j++)
    {
        if (j != last)
        {
            int M = arr[i][j] + fun(arr, i - 1, j, dp);
            maxi = max(M, maxi);
        }
    }
    return dp[i][last] = maxi;
}
void print( vector<vector<int>> &arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\n";
}
int main()
{
    vector<vector<int>> arr = {{10, 20, 30}, {20, 30, 10}, {40, 200, 30}};
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(4, -1));

    cout << fun(arr, n - 1, 3, dp)<<endl;


    vector<vector<int>> dP(n, vector<int>(4, 0));
    dP[0][0] = max(arr[0][0], arr[0][1]);
    dP[0][1] = max(arr[0][0], arr[0][2]);
    dP[0][2] = max(arr[0][1], arr[0][2]);
    dP[0][3] = max(dP[0][0], dP[0][1]); // max of all 3

    for (int i = 1; i < n; i++)
    {
        for (int last = 0; last < 4; last++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (j != last)
                {
                  dP[i][last]  = max(arr[i][j]+dP[i - 1][j],dP[i][last]);
                }
            }
            
        }
    }
    cout<<dP[n-1][3]<<endl; 

    print(dp);
    print(dP);
    return 0;
}
