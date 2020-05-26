// Solution :
// Technique : Dynamic Programming
#include <bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
    if(a>b)
        return a;
    return b;
}
void dpformation(vector<int> &A,vector<int> &B,int i,int j,vector<vector<int>>&dp)
{
        cout<<A[i]<<" " << B[j]<<endl;
        if(i==0 || j==0)
        {
            dp[i][j]=0;
            return;
        }
        if(A[i-1]==B[j-1])
        {
            dp[i][j] = dp[i-1][j-1]+1;
            return;
        }
        else
        {
            int max_val = max(dp[i-1][j],dp[i][j-1]);
            dp[i][j]=max_val;
            return;
        }
    }
    
 int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        vector<vector<int>> dp;
        vector<int> temp;
        for(int i=0;i<=A.size();i++)
        {
            temp.clear();
            for(int j=0;j<=B.size();j++)
            {
                temp.push_back(0);
            }
            dp.push_back(temp);
        }
        for(int i=0;i<=A.size();i++)
        {
            for(int j=0;j<=B.size();j++)
            {
                dpformation(A,B,i,j,dp);       
            }
        }
        for(int i=0;i<=A.size();i++)
        {
            for(int j=0;j<=B.size();j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        return dp[A.size()][B.size()];
        
    }
    int main()
    {
        vector<int> A = {2,5,1,2,5};
        vector<int> B = {10,5,2,1,5,2};
        cout<<maxUncrossedLines(A,B);
    }