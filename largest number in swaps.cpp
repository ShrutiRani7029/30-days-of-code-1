#include<bits/stdc++.h>
using namespace std;
void solve(string str, int n,int k, string &ans,int index)
{
    if(k==0)return;
    char maxchar=str[index];
    for(int i=index+1;i<n;i++)
    {
        if(maxchar<str[i])
            maxchar=str[i];
    }
    if(str[index]!=str[index])
        k--;
    for(int i=n-1;i>=index;i--)
    {
        if(str[i]==maxchar)
        {
            swap(str[index],str[i]);
            if(ans<str)ans=str;
            solve(str,n,k,ans,index+1);
            ///backtracking
            swap(str[index],str[i]);
        }
    }
}
string findmax(string str, int k)
{
    string ans=str;
    int n=str.length();
    solve(str,n,k,ans,0);
    return ans;
}
int main()
{
    int t,k;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>k>>str;
        cout<<findmax(str,k)<<endl;
    }
    return 0;
}
