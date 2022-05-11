#include<bits/stdc++.h>
using namespace std;

int main() {
 int tc;
 cin>>tc;
 while(tc--)
 {
     int n,k;
     cin>>n>>k;
     int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     sort(a,a+n);
     if(a[0]>k||a[n-1]<k)
     {
         cout<<"no"<<endl;
     }
     else
         cout<<"yes"<<endl;
 }
 return 0;
}
