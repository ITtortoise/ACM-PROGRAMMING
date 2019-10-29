#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 999999
int reverse(long long );
int long long a[sz];
using namespace std;
typedef long long ll;
ll n,m,i,j,k,l,c,p,q,rem,rev,x,t,temp;
int reverse(ll x)
{

    rev=0;
    temp=x;
    while(x>0)
    {
        rem=x%10;
        x=x/10;
        rev=(rev*10)+rem;
    }
    if(temp==rev&&c>0)
    {
        cout<<c<<" "<<temp<<endl;
        return 0;
    }
    c++;
    t=rev+temp;
    //cout<<t<<endl;
    reverse(t);




}
int main()
{

    int l;
    cin>>l;
    while(l--)
    {
        cin>>n;
        c=0;
        i=1;
        reverse(n);
    }

}
