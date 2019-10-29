/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
CREATOR:SHOHAG(ICT,MBSTU).......*/
#include<bits/stdc++.h>
#define    sz    100
#define    ll    long long
#define    pb    push_back
#define    mp    make_pair
#define    f     first
#define    s     second
using namespace std;

ll n,m,k,i,j,t,r,l,c,sum=0,cnt=0,x,y,z,rem,mod,b[sz],mx,mn;
char a[sz][sz];
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>r>>c;
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            cin>>a[i][j];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(a[i][j]=='W')
            {
                if(a[i-1][j]=='P'||a[i+1][j]=='P'||a[i][j-1]=='P'||a[i][j+1]=='P')
                    cnt++;
            }
        }
    }
    cout<<cnt;




    return 0;
}

