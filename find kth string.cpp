#include<bits/stdc++.h>
using namespace std;

/*void solve(string num,int index, vector<string>&ans)
{
    if(index==num.size())
    {
        ans.push_back(num);
        return;
    }
    for(int i=index;i<num.size();i++)
    {
        swap(num[index],num[i]);
        solve(num,index+1,ans);
        swap(num[index],num[i]);
    }
}*/

string permute(int n,int k)
{
    int num=1;
    vector<int>numbers;//for storing numbers
    for(int i=1;i<n;i++)//n=4
    {
        num=num*i;//fact=fact*4//fact=1*1=1,fact=1*2=2,fact=2*3=6.
    numbers.push_back(i);//so push(1234)
    //cout<<num<<"j"<<endl;
    }

    numbers.push_back(n);
    string ans= "";//for storing final string.
    k=k-1;//because starting from 0th index so k=3, k=3-1=2
    //cout<<num<<"f"<<endl;
    while(true)
    {
        ans=ans+to_string(numbers[k/num]);//ans=ans+ to_string(numbers[2/6])//0 th index//numbers[2/2]//1th index=3
        //cout<<numbers[0]<<numbers[1]<<endl;
        //cout<<ans<<"l"<<endl;
        //cout<<k/num<<endl;
        numbers.erase(numbers.begin()+k/num);//number.erase(number.begin()+3/6//2,3,4
        //break;
        if(numbers.size()==0)//
            break;
            //cout<<num<<"j:"<<k<<endl;
        k=k%num;//k=k%num//k=2%6=2
        //cout<<k<<endl;
        num=num/numbers.size();//num=6/3=2
        //cout<<num<<endl;
    }
    return ans;//1324

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;//n=4,k=3
        string ans=permute(n,k);
        cout<<ans;
        cout<<"\n";
    }

}









