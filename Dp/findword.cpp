#include <bits/stdc++.h>

using namespace std;

 bool fun(vector<vector<char>>& b, string w,int i,int j,int indx,vector<vector<int>> &v)
    {
        
        if(indx==w.length()) return true;

        if(i>=b.size() || j>=b[0].size() || i<0 || j<0 || v[i][j] || b[i][j] != w[indx])
           return false;
cout<<b[i][j];
        v[i][j]=1;
        
        if(fun(b,w,i,j+1,indx++,v) || fun(b,w,i,j-1,indx++,v)
        || fun(b,w,i+1,j,indx++,v) || fun(b,w,i-1,j,indx++,v))
            return true;

        v[i][j]=0;
        return false;      
    }
 bool exist() {
         vector<vector<char>> board = {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
         string word="SABCCED";
         vector<vector<int>> v(board.size(),vector<int>(board[0].size(),0));
         for(auto i=0;i<board.size();i++)
          for(int j=0;j<board[0].size();j++)
          {
             if(board[i][j]==word[0] &&  fun(board,word,i,j,0,v))
                 return true;
          }

        return false;
    }
   
int main()
{
    bool x = exist();

    return 0;
}