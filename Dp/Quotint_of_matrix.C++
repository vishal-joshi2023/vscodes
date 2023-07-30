#include <bits/stdc++.h>
using namespace std;
int m=3,n=3;

int diagonalSum(vector<vector<int>>& v){

     int ans = 0;
     for(int i=0;i<m;i++)
     	ans+= v[i][i];

     return ans;
}
//unit digit
int unitSum(int n)
{
    if (n == 0)
       return 0;
    return (n % 9 == 0) ? 9 : (n % 9);
}
int Quotient(vector<vector<int>>& v,int x,int y)
{
   int uSum = unitSum(v[x][y]);
   int dSum = diagonalSum(v);

   return dSum/uSum;
}

int main()
{
   vector<vector<int>> v={{11,22,33},{44,55,66},{77,88,99}};
   

   cout<<Quotient(v,1,1);
	return 0;
}