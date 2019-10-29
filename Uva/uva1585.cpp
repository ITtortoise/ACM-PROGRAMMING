#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 10000001
long long a[sz];
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    getchar();
    while(t--)
    {
        ll n,m,i,j,k,l,c,p,q,sum=0;
        string s;
        getline(cin,s);
        for(i=0; i<s.size(); i++)
        {

            if(s[i]=='O')
            {
                c=1;
                for(i=i; s[i]!='X'&&s[i]!='\0'; i++)
                {
                    sum=sum+c;
                    c++;
                }
                i=i-1;

            }
        }
        cout<<sum<<endl;
    }





    return 0;
}

