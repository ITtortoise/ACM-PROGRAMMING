/*"BISMILLAHIR RAHMANIR RAHIM....."
"YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS...TRY,TRY AND TRY"
submited by:SHOHAG(ICT,MBSTU).......*/
#include<bits/stdc++.h>
#define  sz    100000
#define  ll    long long
#define  pb    push_back
#define  mp    make_pair
#define  ff     first
#define  ss     second
#define  all(x)   x.begin(),x.end()
#define  dbg     cout<<"yes"<<endl
#define r0       return 0
using namespace std;


int main()
{
    vector<ll>v,v1,v2,v3;
    ll n,m,k,i,d=1,j,t,f=0,r,l,c=0,t1,t2,t3,sum=0,temp,temp1,cnt=0,a[sz],x,y,rem,mod,mx,mn;
    memset(a,0,sizeof(a));
    string str1,str2;
    map<ll,ll>_mp,_mp2;
    map<ll,ll>::iterator it;
    vector<ll>vv[51];
    set<ll>st;
    set<ll>::iterator it1;

    for(j=1; j<=30; j++)
    {
        for(i=1; i<=j; i++)
            d=d*2;

        v1.pb(d);
        d=1;
    }

    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>t;
        v2.pb(t);
        _mp2[t]=1;
        _mp[t]++;
    }


    for(i=0; i<n; i++)
    {
        cnt=0;
        f=0;
        for(j=0; j<30; j++)
        {
            temp=v1[j]-v2[i];
            if(temp==v2[i])
            {
                if(_mp[temp]>1)
                {
                    f=1;
                    //cout<<"1 ter besi ache";
                    //cout<<v2[i]<<endl;
                    break;
                }

            }
            else if(_mp2[temp]==1)
            {
                f=1;
                //cout<<"array te ase";
                //cout<<temp<<endl;
                break;
            }

        }
        if(f==0)
        {
            //cout<<"1 ter besi nai or";
            //cout<<"array te nai"<<endl;
            c++;
        }

        //r0;


    }
    cout<<c<<endl;

    _mp.clear();
    _mp2.clear();
    v1.clear();
    v2.clear();
    //main();


}

