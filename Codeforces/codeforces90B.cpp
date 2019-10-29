/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS.."
CREATOR:SHOHAG(ICT'13,MBSTU).......*/
#include<bits/stdc++.h>
#define  pf printf
#define  sf scanf
#define  sz    100
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

char a[sz][sz];
ll n,i,j,m,k,t,r,c,sum=0,cnt=0,f,b[sz],rem,mod,mx,mn;
string s,s1;
map<ll,ll>mp;
map<ll,ll>::iterator it;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{


    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cnt=0;
            f=0;
            for(k=0; k<m; k++)
            {
                if(a[i][j]==a[i][k])
                    cnt++;
                if(cnt==2)
                {
                    f=1;
                    break;
                }
            }
            //cout<<a[i][j]<<' '<<cnt<<endl;

                cnt=0;
                for(k=0; k<n; k++)
                {
                    if(a[i][j]==a[k][j])
                        cnt++;
                    if(cnt==2)
                    {
                        f=1;
                        break;
                    }
                }

            //cout<<a[i][j]<<' '<<cnt<<endl;
            if(f==0)
                s+=a[i][j];

        }


    }
    cout<<s;

    //main();
}

