#include <bits/stdc++.h>
using namespace std;
int transforming(string A, string B){
    map<char, int> mp;
    for(int i=0; i<A.size(); i++){
        mp[A[i]]++;
    }
    int i=A.size()-1;
    int j=B.size()-1;
    if(i!=j)
    return -1;
    for(int i=0; i<B.size(); i++){
        if(mp.find (B[i])== mp.end())
        return -1;
        else{
            mp[B[i]]--;
            if(mp[B[i]==0])
            mp.erase(B[i]);
        }
    }
    int count=0;
    if(A==B)
    return 0;
    while(i>=0){
        if(A[i]==B[j]){
            i--;
            j--;
        }
        else{
            i--;
            count++;
        }
    }
    return count;
}
int main(){
    string A, B;
    cout<<"strings"<<endl;
    cin>>A>>B;
    cout<<"no.of steps"<<transforming(A,B);
    return 0;
}
