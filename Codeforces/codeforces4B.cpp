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

ll n,m,k,i,j,t,c1,c2,x,r,res,mod,a[sz],MX,d,sum=0,f=0;
map<ll,ll>_map;
vector<pair<ll,ll>>v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>d>>t;
    for(i=0; i<d; i++)
    {
        cin>>c1>>c2;
        sum=sum+c2;
        v1.pb(c1);
        v2.pb(c2);

    }

    if(sum==t)
    {    cout<<"YES"<<endl;
        for(k=0; k<d; k++)
            cout<<v2[k]<<" ";
    }
    else
    {
        for(j=0; j<d; j++)
        {
            while(v2[j]>v1[j])
            {
                v2[j]=v2[j]-1;
                sum=sum-1;
                //cout<<v2[j]<<" "<<sum<<endl;
                if(sum==t)
                {
                    cout<<"YES"<<endl;
                    f=1;
                    break;
                }

            }   if(f==1)
                    break;
         }
        if(f==1)
        {
            for(k=0; k<d; k++)
                cout<<v2[k]<<" ";
        }
        else if(f==0)
            cout<<"NO"<<endl;

     }
    return 0;
}
