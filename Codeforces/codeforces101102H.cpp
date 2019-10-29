#include<bits/stdc++.h>
using namespace std;
#define sz 10000000
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,j=0,k,f,y=0,i;
        string s;
        cin>>n>>f;
        cin>>s;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
            {
                y++;
                if(y==f+1)
                {
                    j=1;
                    cout<<"yes"<<endl;
                    break;
                }
            }
            else if(s[i]=='1')
                y=0;

        }

        if(j==0)
            cout<<"no"<<endl;
    }
    return 0;





}

