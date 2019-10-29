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

ll n,i,j,m,k,t,sum=0,cnt=0,a,b,d,rem,mod,mx,mn,L=0;
string s,s1;
map<ll,ll>_mp;
map<ll,ll>::iterator it;
list<ll>mylist;
list<ll>::iterator itt;
vector<ll>v4[51];
char ch;
int main()
{
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>ch>>n;
        if(ch=='L')
        {
            mylist.push_front(n);
            _mp[n]=i+L;
        }
        else if(ch=='R'&&i>1)
        {
            mylist.push_back(n);
            _mp[n]=1;
            L++;
        }
        else if(ch=='?')
        {
        cout<<mylist.size()<<endl;


          int ss=mylist.size();
            cout<<_mp[n]<<' ';
            cout<<abs(ss-_mp[n])<<endl;



        }

    }
    for(it=_mp.begin();it!=_mp.end();it++)
        cout<<it->ff<<' '<<it->ss<<endl;



}

