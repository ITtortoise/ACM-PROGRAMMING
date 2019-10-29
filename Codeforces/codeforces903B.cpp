/*BISMILLAHIR RAHMANIR RAHIM*/
/*YOUR OUTPUT WILL BE REWARDED,NOT YOUR EFFORTS*/
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

ll n,m,k,i,t1,t3,r=0,l,f2,c1,sum=0,cnt=0,x,y,z,rem,mod,a[sz],b[sz],mx,mn,h1,c=0,p=1;
double a2,j,h[sz];
double t2,h2,a1,f1;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    cin>>h1>>a1>>c1>>h2>>a2;

    t3=h1;
    t2=ceil(h2/a1);
    for(k=0;; k++)
    {

        if(h1>0&&h1-a2>0)
        {
            h1=h1-a2;
            c++;
        }
        else
        {
            c++;
            v1.pb(c);
            a[r++]=c;
            //cout<<a[r-1]<<" ";
            h1=h1+(c1*p);
            if(t3+(c1*(p-1))>h2)
                break;
                p++;
        }
    }

    for(i=0;i<v1.size();i++)
        if(v1[i]<=t2)
        cnt++;
        cout<<t2+cnt<<endl;
    for(l=1;l<=(t2+cnt);l++)
    {
        if (find(v1.begin(), v1.end(), l) != v1.end() )
           cout<<"HEAL"<<endl;
        else
            cout<<"STRIKE"<<endl;
    }


    return 0;
}

