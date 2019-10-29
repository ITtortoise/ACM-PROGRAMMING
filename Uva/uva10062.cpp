#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 100000
int long long a[sz];
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j,k,amt[sz],p,q,t,c;
    string s;

    while(getline(cin,s))
    {
        c=0;
        memset(amt,0,100000);
        for(p=0; p<s.size(); p++)
        {
            c++;
            amt[s[p]-48]++;
        }
        //sort(amt,amt+c);
        for(q=175; q>=48; q--)
        {
            if(amt[q-48]>0)
                cout<<q<<" "<<amt[q-48]<<endl;
        }
        //cout<<endl;
        s="";
    }

    return 0;


}

