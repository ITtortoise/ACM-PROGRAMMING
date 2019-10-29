#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
map<string,int>::iterator it;
vector<pair<int,string> >v;
long long n,i,j,k;
string s,s1;
int main()
{
    cin>>n;
    cin>>s;
    for(i=0; i<s.size()-1; i++)
    {
        s1+=s[i];
        s1+=s[i+1];
        mp[s1]++;
        s1.clear();
    }
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        //cout<<it->first<<' '<<it->second<<endl;
        v.push_back(make_pair(it->second,it->first));
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1].second;
}
