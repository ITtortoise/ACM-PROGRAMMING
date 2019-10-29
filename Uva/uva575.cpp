#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 999999
long long a[sz];
using namespace std;
typedef long long ll;
int main()
{

    string s;
    while(getline(cin,s))
    {
        if(s=="0")
            break;
        ll n,m,i,j,k,l,p,q,c=0,c2=0,rem,v,v1,s1=0;
        l=s.size();
        for(i=l-1,j=1; i>=0,j<=l; i--,j++)
        {
            v=s[i]-'0';
            v1=pow(2,j);
            v1=v1-1;
            s1=s1+v*v1;

        }
        cout<<s1<<endl;
        s="";
    }

    return 0;


}

