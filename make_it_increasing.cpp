/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        int a[n],b[n],c[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
            for(int i=0;i<n;i++)
            {
                b[i]=a[i];
            }
            for(int i=0;i<n;i++)
                c[i]=a[i];
            sort(b,b+n);
            sort(c,c+n,greater<int>());
            for(int i=0;i<n;i++)
            {
                if(a[i]==b[i])
                {
                    count=0;
                }
            }
            for(int i=0;i<n;i++)
            {
                if(

                   )
            }

    }
}*/
#include <bits/stdc++.h>
using namespace std;

void shruti( long long int shrut[] , long long int digit)
{
    int cnt = 0;
    bool out = true;
    for (long long int i = digit - 2; i >= 0; i--)
    {
        while (shrut[i + 1] <= shrut[i] && shrut[i] != 0)
        {

            // decrease the array until it is strictly less that its next elemen
            shrut[i] = shrut[i] / 2;
            cnt++;
        }
    }

    // loop till digit-1 , so that array doesnt go out of bound when checking for shrut[i+i]  and i = digit -1 ;

    for (long long int i = 0; i < digit - 1; i++)
    {
        if (shrut[i + 1] <= shrut[i])
        {
            out = false;
        }
    }

    if (out)
    {
        cout << cnt << endl;
    }
    else
        cout << -1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int digit;
        cin >> digit;
        long long shrut[digit];

        for (auto i = 0; i < digit; i++)
        {
            cin >> shrut[i];
        }

        shruti(shrut, digit);

    }
}



















