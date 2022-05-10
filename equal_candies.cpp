#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,min=INT_MAX,num;
        cin>>n;
        int a[n],b[n],sum=0;
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        {
            if(a[i]<min)
            {
                min=a[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            b[i]=a[i]-min;
        }

        for(int i=0;i<n;i++)
        {
            sum=sum+b[i];
        }

        cout<<sum<<endl;

    }
}
