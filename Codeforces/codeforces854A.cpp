#include<bits/stdc++.h>
#define    sf    scanf
#define    pf    printf
#define    pi    acos(-1.0)
#define    sz    100001
#define    ll    long long
#define    pb    push_back
#define    mp    make_pair
#define    f     first
#define    s     second
#define   all(x) x.begin(),x.end()
using namespace std;
ll a[sz];
ll n,m,s,s2,c=0,x,rem,mod,p,q,i,j,t,k;
double mx=-1.0000,r,u,v;
int gcd(int i,int j)
{
    int rem=j%i;
    if (rem==0&&i==1)
        return true;
    else if(rem==0)
        return false;
    else
        gcd(rem,i);
}
int main()
{
    cin>>n;
    for(i=1,j=n-1; i<=n/2; i++,j--)
    {

        if(i==j)
            break;

        else if(i+j==n&&gcd(i,j)==true)
        {
            u=i;
            v=j;
            r=u/v;
            if(r>mx)
            {

                mx=r;
                t=i;
                k=j;


            }
        }
    }
    cout<<t<<" "<<k;


    return 0;
}

