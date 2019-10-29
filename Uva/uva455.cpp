#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 99999
long long a[sz];
using namespace std;
typedef long long ll;
int main()
{
    ll t,y,q=1;
    cin>>t;
    y=t;
    getchar();
    while(t--)
    {
        ll i,j,k,l,p=0;
        string s,s1,s2;
        getchar();
        getline(cin,s);

        for(j=1; j<=s.size(); j++)
        {
            s1=s.substr(0,j);
            l=0;
            //cout<<s1<<endl;
            for(k=0; k<s.size(); k+=j)
            {

                s2=s.substr(k,j);

                if(s1==s2)
                {
                    //cout<<s2<<" ";

                    l=l+s2.size();
                    if(l==s.size())
                    {
                        p=1;
                        cout<<s2.size()<<endl;
                    }
                    s2="";
                }
                else
                    break;
            }
            if(p==1)
                break;
        }
        if(y>q)
        {
            cout<<endl;
            q++;
        }

    }

    return 0;


}

