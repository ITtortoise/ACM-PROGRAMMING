#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 99999
long long a[sz];
using namespace std;
typedef long long ll;

int main()
{
    ll t,j;
    cin>>t;
    for(j=1; j<=t; j++)
    {
        ll B=0,W=0,T=0,A=0,i,n;
        string s;
        cin>>n;
        getchar();
        getline(cin,s);
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='B')
                B++;
            else if(s[i]=='W')
                W++;
            else if(s[i]=='T')
                T++;
            else if(s[i]=='A')
                A++;
        }
        //cout<<B<<" "<<W<<" "<<T<<" "<<A<<endl;
         if(A==n)
            cout<<"Case "<<j<<": ABANDONED"<<endl;
        else if(W==0&&T==0)
            cout<<"Case "<<j<<": BANGLAWASH"<<endl;
        else if(B==0&&T==0)
            cout<<"Case "<<j<<": WHITEWASH"<<endl;

        else if(B==W)
            cout<<"Case "<<j<<": DRAW "<<B<<" "<<T<<endl;
        else if(B>W)
            cout<<"Case "<<j<<": BANGLADESH "<<B<<" - "<<W<<endl;
        else if(W>B)
            cout<<"Case "<<j<<": WWW "<<W<<" - "<<B<<endl;

    }
    return 0;
}

