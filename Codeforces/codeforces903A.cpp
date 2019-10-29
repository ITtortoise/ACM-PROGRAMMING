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

ll n,m,k,i,j,t,r,l,c,c1,c2,sum=0,cnt=0,x,y,z,rem,mod,a,b,mx,mn,arr[sz],three,seven,ten;
string s1,s2,s3;
map<ll,ll>_map;
vector<pair<ll,ll> >v;
vector<ll>v1,v2,v3;
int main()
{
    for(n=1; n<=100; n++)
    {
        //cin>>n;
        three=n;
        seven=n;
        ten=n;
        if(n%3==0||n%7==0||n%10==0)
            arr[n]=1;
        else
        {
            while(three>=3&&arr[n]==0)
            {
                three=three-3;
                if(three%7==0||three%10==0||three%3==0)
                    arr[n]=1;
            }
            while(seven>=7&&arr[n]==0)
            {
                seven=seven-7;
                if(seven%3==0||seven%10==0||seven%7==0)
                    arr[n]=1;
            }
            while(ten>=10&&arr[n]==0)
            {
                ten=ten-10;
                if(ten%7==0||ten%10==0||ten%3==0)
                    arr[n]=1;
            }

        }
    }
    cin>>m;
    for(t=0; t<m; t++)
    {
        cin>>c;
        if(arr[c]==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}

