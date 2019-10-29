#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 99999
long long a[sz];
using namespace std;
typedef long long ll;

int main()
{
    ll n,m,i,j=0,k,l,c,p,q,amt[sz];
    string s1,s2;

    while(cin>>n)
    {
        if(n==0)
            break;
        getchar();
        getline(cin,s1);
        l=s1.size();
        n=l/n;
        for(i=0; i<s1.size(); i=j)
        {
            for(j=i; s2.size()<n; j++)
                s2+=s1[j];
            reverse(s2.begin(),s2.end());
            cout<<s2;
            s2="";

        }
        cout<<endl;
    }
    return 0;
}

