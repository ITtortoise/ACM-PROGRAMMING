#include<bits/stdc++.h>
using namespace std;
#define sz 10000
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
using namespace std;
int main()
{
    ll n,i,j,k,a=0,c=0,g=0,t=0;
    string s1,s;
    cin>>n;
    getchar();
    cin>>s;
    if(n%4==0)
    {
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='A')
                a++;
            else if(s[i]=='C')
                c++;
            else if(s[i]=='G')
                g++;
            else if(s[i]=='T')
                t++;

        }

        if(a>n/4||c>n/4||g>n/4||t>n/4)
        {
            cout<<"==="<<endl;
            return 0;
        }
        if(a<n/4)
        {
            for(j=0; j<(n/4)-a; j++)
                s1+='A';
        }
        if(c<n/4)
        {
            for(j=0; j<(n/4)-c; j++)
                s1+='C';
        }
        if(g<n/4)
        {
            for(j=0; j<(n/4)-g; j++)
                s1+='G';
        }
        if(t<n/4)
        {
            for(j=0; j<(n/4)-t; j++)
                s1+='T';
        }
        //cout<<s1;
        for(i=0; i<n; i++)
        {
            if(s[i]=='?')
            {
                s[i]=s1[0];
                s1.erase(0,1);
            }
        }
        cout<<s;


    }
    else
        cout<<"==="<<endl;


}

