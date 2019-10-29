#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 99999
long long a[sz];
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,i,j,k,l,c=0,p,q,amt[sz];
    string s1,s2,s3;
    map<string,string>mp;
    for(i=0; i<100000; i++)
    {
        cin>>s1>>s2;
        mp[s2]=s1;
    }
    getchar();
    for(j=0; j<100000; j++)
    {
        cin>>s3;
        if ( mp.find(s3) == mp.end())
           cout<<"eh"<<endl;
        else
           cout<<mp[s3]<<endl;

    }
    return 0;


}
