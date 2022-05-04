#include<bits/stdc++.h>
#define MAX 5
using namespace std;

/*bool isSafe(int row, int col, int n)
{
    if(row>=0 && col<n && col>=0 && row<n)
    {
        return true;
    }
    return false;
}*/

class Solution{
    public:
    vector<string>ans;
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        func(m,n,0,0,"");
        return ans;
    }
    void func(vector<vector<int>> &m,int n,int i, int j, string curr)
    {

        if(i==n-1 && j==n-1)
        {
            if(m[i][j]==1)
            {
                ans.push_back(curr);
            }
            else
            return;
        }
        if(i<0 || j<0 ||i>=n || j>=n || m[i][j]==0) return;
        else m[i][j]=0;
        func(m,n,i,j+1,curr+'R');
        func(m,n,i,j-1,curr+'L');
        func(m,n,i+1,j,curr+'D');
        func(m,n,i-1,j,curr+'U');
        m[i][j]=1;

    }

};




int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        //int m[n][n];
        vector<vector<int>> m(n, vector<int>(n,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>m[i][j];///i=row, j=column
            }
        }
        Solution ob;
        vector<string>result=ob.findPath(m,n);
        sort(result.begin(), result.end());
        if(result.size()==0) cout<<-1;
        else
            for(int i=0;i<result.size();i++)
        {
            cout<<result[i]<< " ";
        }
        cout<<endl;

    }
}

