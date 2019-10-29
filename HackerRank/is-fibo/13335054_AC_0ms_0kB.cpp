/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
CREATOR:SHOHAG(ICT,MBSTU).......*/
#include<bits/stdc++.h>
//#define  pf printf
//#define  sf scanf
#define  sz    100001
#define  ll    long long
#define  pf    push_front
#define  pb    push_back
#define  pb    push_back
#define  fb    front_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()

using namespace std;
ll n,m,k,i,j,t=1,f=0,t1,t2,t3,t4,t5,r,l,c,sum=0,cnt=0,x,y,a,b,g,z,rem,mod,mx,mn;
string s,s1,s2,s3,s4;
map<ll,ll>M;
map<ll,ll>::iterator it1;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
vector<ll>v4[51];
vector<ll>::iterator it2;
list<ll>l1,l2;
list<ll>::iterator it3;
set<ll> st,st1,st2;
set<ll>::iterator it4;
int main()
{
    cin>>t2;
    for(j=0; j<t2; j++)
    {
        cin>>n;
        a=0;
        b=1;
        st.insert(0);
        for(i=0;; i++)
        {

            f=a+b;
            st.insert(f);
            if(f>n)
                break;
            a=b;
            b=f;


        }

        it4=st.find(n);
        if(it4!=st.end())
            cout<<"IsFibo"<<endl;
        else
            cout<<"IsNotFibo"<<endl;
    }

    return 0;
}


