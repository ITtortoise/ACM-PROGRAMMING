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

ll n,m,k,i,j,t,r,l,c,sum=0,cnt=0,x,y,z,rem,mod,a[sz],b[sz],mx,mn;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    ll v1[36]= {31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};

    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>t;
        v2.pb(t);
    }
    for(i=0; i<36; i++)
    {
        for(j=i;; j++)
        {
            v3.pb(v1[j%36]);
            if(v3.size()==n)
            {
                if(v3==v2)
                {
                    cout<<"Yes";
                    return 0;
                }
                else
                break;
            }
        }
        /*for(k=0; k<v3.size(); k++)
            cout<<v3[k]<<" ";
        cout<<endl;*/
        v3.clear();
    }
    cout<<"No"<<endl;

}

