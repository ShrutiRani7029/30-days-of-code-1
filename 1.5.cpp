///ABOUT IF(?) AND ELSE(:)
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int num;
    cin>>num;
    (num==1)?cout<<"1"<<endl : cout<<"other"<<endl;///? means if and : means else
    }
}*/
///DIFFERENCE BETWEEN TWO STATEMENTS
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    char *str="computer";here &str!=str and &arr==arr
    char arr[]="computer";
    cout<<str;
    cout<<arr;
}*/
///ABOUT ENUM
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    enum p {a=1,b,c,d,e=60,u};
    cout<<a<<b<<c<<d<<e<<u;///a=1,b=2,c=3,d=4,e=60,u=61 because in enum value of is one more than the previous member.
}*/
///IF LOTS OF VARIABLE ARE PRESENT IN ONE VARIABLE THEN TAKE THE VALUE OF LAST VARIABLE(WHEN ARGUEMENTS ARE WITHIN THE BRACE AND SEPARATED BY COMMAS).
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1,j=2,k=4;
    int p,q;
    p=(i,k,j);///ans=2.
    q=(j,k,i);///ans=1.
    cout<<p<<q<<endl;
}
*/
///DIFFERENCE BETWEEN SIGNED AND UNSIGNED INT.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int k = -11;///represents values greater than or equal to zero
    signed int l=-11;///if you want to mention about number that it is negative then you have to give negative sign in front of the number otherwise number considered as positive.
    cout<<k<<" "<<l;
}


