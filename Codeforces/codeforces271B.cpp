/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
CREATOR:SHOHAG(ICT,MBSTU).......*/
#include<bits/stdc++.h>
#define  pf printf
#define  sf scanf
#define  sz    1000001
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

ll n,m,k,i,j,t,t1,t2,t3,t4,t5,r,l,c,sum=0,cnt,x,y,a[sz],b[sz],arr[505][505],g,z,rem,mod,mx,mn1=INT_MAX,mn2=INT_MAX,p;
string s1,s2,s3;
map<ll,ll>M;
map<ll,ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    a[0]=a[1]=1;
    for(p=2; p<=sqrt(1e5+5); p++)
    {
        if(a[p]==0)
        {

            for(j=p*p; j<=1e5+5; j=j+p)
            {
                a[j]=1;
            }
        }
    }
    cin>>r>>c;
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            cin>>arr[i][j];
    for(i=0; i<r; i++)
    {
        cnt=0;
        for(j=0; j<c; j++)
        {
            if(a[arr[i][j]]==1)
            {
                for(t1=arr[i][j];; t1++)
                {
                    if(a[t1]==1)
                        cnt++;
                    else
                        break;
                }
            }

        }
        //cout<<cnt<<endl;
        mn1=min(mn1,cnt);

    }
    //
    for(i=0; i<c; i++)
    {
        cnt=0;
        for(j=0; j<r; j++)
        {
            if(a[arr[j][i]]==1)
            {
                for(t1=arr[j][i];; t1++)
                {
                    if(a[t1]==1)
                        cnt++;
                    else
                        break;
                }
            }

        }

          //cout<<cnt<<endl;
          mn2=min(mn2,cnt);
    }
    cout<<min(mn1,mn2)<<endl;

    return 0;
}

