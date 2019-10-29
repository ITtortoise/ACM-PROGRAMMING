#include<bits/stdc++.h>
#define sf scanf
#define pf printf
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    while(cin>>n)
    {
        ll i,a,j=1,s=1,c=0;
        vector<long long int>v;
        while(s%n!=0)
        {
            v.push_back(1);
            c++;
            for(i=0; i<v.size(); i++)
            {
                if(c==1)
                    s=0;
                s=s+(v[i]*j);
                j=j*10;

            }


        }
        cout<<s<<endl;
        cout<<v.size()<<endl;
        v.clear();

    }

    return 0;
}

