/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS.."
CREATOR:SHOHAG(ICT'13,MBSTU).......*/
#include<bits/stdc++.h>
#define  pf printf
#define  sf scanf
#define  sz    1e7
#define  pi    acos(-1.0)
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

ll n,i,j,L,m,k,t,sum,cnt,d,rem,mod,mx,mn,v,r,l;
string s1;
map<ll,ll>_mp;
map<ll,ll>::iterator it;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
int main()
{
    cin>>n;
    cout<<"Lumberjacks:"<<endl;
    while(n--)
    {
        for(i=0; i<10; i++)
        {
            cin>>t;
            v1.pb(t);
            v2.pb(t);
        }
        sort(all(v2));

       ll cnt1=0,cnt2=0;
        for(i=0; i<10; i++)
        {

            if(v1[i]==v2[i])
                cnt1++;
        }

        reverse(all(v2));
        for(i=0; i<10; i++)
        {

            if(v1[i]==v2[i])
                cnt2++;
        }

        if(cnt1==10||cnt2==10)
            cout<<"Ordered"<<endl;
        else
            cout<<"Unordered"<<endl;

        v1.clear();
        v2.clear();
    }




}

