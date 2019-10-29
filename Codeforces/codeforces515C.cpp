/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS.."
CREATOR:SHOHAG(ICT'13,MBSTU).......*/
#include<bits/stdc++.h>
#define  pf printf
#define  sf scanf
#define  sz    1e7
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
using namespace std;

ll n,i,j,m,k,t,sum=0,cnt,cnt1,a,b,d,rem,mod,mx,mn;
string s,s1;
map<ll,ll>mp;
list<ll>::iterator it,it1;
list<ll>v1,v2,v3;
vector<ll>v4[51];
queue<ll>q;
int main()
{
    char ch;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>ch>>n;
        cnt=cnt1=0;
        if(ch=='R')
        {
            v1.push_back(n);
        }
        else if(ch=='L')
                v1.push_front(n);
        else if(ch=='?')
        {
            for(it=v1.begin();it!=v1.end();it++)
                {
                   if(*it!=n)
                        cnt++;
                    else
                        break;
                }

            for(it1=v1.end();it1!=v1.begin();it1--)
                {
                    if(*it1!=n)
                        cnt1++;
                    else
                        break;
                }
            cout<<min(cnt,cnt1-1)<<endl;
            //cout<<cnt<<' '<<cnt1-1<<endl;
        }


    }

}

