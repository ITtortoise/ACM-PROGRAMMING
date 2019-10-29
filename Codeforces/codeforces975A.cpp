#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<char,ll>mp;
map<string,ll>mp1;
map<char,ll>:: iterator it;
int main()
{
    string s,s2;
    ll i,n,j;
    cin>>n;
    for(j=0; j<n; j++)
    {
        cin>>s;
        sort(s.begin(),s.end());
        for(i=0; i<s.size(); i++)
        {
            mp[s[i]]=0;
        }
        for(it=mp.begin(); it!=mp.end(); it++)
            s2+=it->first;
        mp1[s2]=0;
        s2.clear();
        s.clear();
        mp.clear();
    }
    cout<<mp1.size()<<endl;

}
