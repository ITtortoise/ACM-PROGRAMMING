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
    string s,s1,s2;
    cin>>s;
    getchar();
    cin>>s1;
    int l=s1.size();
    for(i=0; i<s.size(); i++)
    {
        for(j=i;s[j]!=NULL; j++)
        {
            s2+=s[j];
            if(s2.size()==l||j==s.size()-1)
            {
                //cout<<s2<<endl;
                if(s2==s1)
                {
                    i=i+l-1;
                    c++;
                }
                s2="";
                break;
            }
        }



    }
    cout<<c;

    return 0;
}
