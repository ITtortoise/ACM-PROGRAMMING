#include<bits/stdc++.h>
using namespace std;
long long n,i,j,k,sqrtn,checkprime[10000000],b,p,m;
vector<long long>prime;
#define  ll long long
void seive()
{
    checkprime[0]=1;
    checkprime[1]=1;

    for(i=2; i<=sqrt(65005); i++)
    {
        if(checkprime[i]==0)
        {
            for(j=i*i; j<=65005; j+=i*2)
                checkprime[j]=1;
        }
    }
}
int bigmod(ll b,ll p,ll m)
{
    if(p==0)
        return 1;
    else if(p%2==1)
    {
        ll part1=b%m;
        ll part2=bigmod(b,p-1,m);
        return (part1*part2)%m;
    }
    else if(p%2==0)
    {
        ll half=bigmod(b,p/2,m);
        return (half*half)%m;
    }
}


int main()
{
    seive();

    while(cin>>n)
    {
        if(n==0)
            return 0;
        if(checkprime[n]==1)
        {
            bool flag=false;
            for(i=2; i<n; i++)
            {
                if(bigmod(i,n,n)!=i)
                {
                   cout<<n<<" is normal."<<endl;
                   flag=true;
                   break;
                }
            }
            if(flag==false)
            cout<<"The number "<<n<<" is a Carmichael number."<<endl;
        }
        else
            cout<<n<<" is normal."<<endl;


    }




}

