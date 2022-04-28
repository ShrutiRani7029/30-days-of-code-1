#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>track;
    stack<int>st,aux;
    int arr[]={100,80,60,70,60,75,85};
    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        int count=1;
        while(!st.empty() && st.top()<=arr[i])
        {
            count++;
            st.pop();
        }
        aux.push(arr[i]);
        st=aux;
        track.push_back(count);
    }
        for(auto ele:track)
        {
            cout<<ele<<" ";
        }

    }

