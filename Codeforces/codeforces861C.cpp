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

ll n,m,k=0,i,j,t,c,x,r,res,mod,a[sz],MX;
 char ch;
map<char,ll>_map;
vector<pair<ll,ll>>v;
vector<ll>v1,v2,v3;
 bool isCon(char ch)
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            return false;
                   return true;
        }
int main()
{
    string s;
    cin>>s;

    for(i=0; i<s.size(); i++)
    {
        if(isCon(s[i])&&isCon(s[i+1])&&isCon(s[i+2])&&(s[i]!=s[i+1]||s[i+1]!=s[i+2])&&s[i+1]!=NULL&&s[i+2]!=NULL)
        {
            cout<<s[i]<<s[i+1]<<" ";
            i++;
        }
        else
            cout<<s[i];

    }

    return 0;
}
