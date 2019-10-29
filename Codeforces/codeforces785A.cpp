#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 99999
using namespace std;
typedef long long LL;
int main()
{
    LL n,i,j,s=0,k=0;
    string s1;
    sf("%lld",&n);
    getchar();
    for(i=0; i<n; i++)
    {
        getline(cin,s1);
        if(s1[0]=='T')
            s=s+4;
        else  if(s1[0]=='C')
            s=s+6;
        else if(s1[0]=='O')
            s=s+8;
        else  if(s1[0]=='D')
            s=s+12;
        else  if(s1[0]=='I')
            s=s+20;
    }
    cout<<s;


}
