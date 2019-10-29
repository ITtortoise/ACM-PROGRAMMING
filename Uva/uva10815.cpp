#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 99999
long long a[sz];
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,i,j,k,l,c,p,q,amt[sz];
    string s,s1;
    map<string,int>mp;

    while(cin>>s)
    {
        for(i=0; i<s.size(); i++)
        {
            if(isalpha(s[i]))
                s1+=tolower(s[i]);

            if((!isalpha(s[i])||i==s.size()-1)&&s1.size()>0)
            {
                mp[s1]=0;
                s1="";

            }


        }
    }

    for(auto i:mp)
        cout<<i.first<<endl;

    return 0;
}



