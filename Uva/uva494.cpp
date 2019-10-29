#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 99999
long long a[sz];
using namespace std;
typedef long long ll;

int main()
{
    ll n,m,i,j,k,l,count,p,q,amt[sz];
    string s;
    while(getline(cin,s))
    {
        count=0;
        for(i=0; i<s.size(); i++)
        {
            if(isalpha(s[i]))
            {
                count++;
                for(i=i+1; isalpha(s[i]); i++);
            }
        }
        cout<<count<<endl;
        s="";
    }
    return 0;
}

