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

ll n,m=0,k=0,i,j,t,c=0,x,r,res,mod,a[sz],MX;
map<ll,ll>_map;
vector<pair<ll,ll>>v;
vector<ll>v1,v2,v3;
int main()
{
    string s,s1;
    cin>>s;
    getchar();
    cin>>s1;
    for(i=0; i<s.size(); i++)
    {

        if(s[i]==s1[k])
        {
            k++;

            if(k==s1.size())

            {
                c++;
                k=0;
            }

        }
        else
            k=0;

    }
    cout<<c;

    return 0;
}

