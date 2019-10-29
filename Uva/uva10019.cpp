#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 999999
long long a[sz];
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,i,j,k,l,p,q,c=0,c2=0,rem,v,v1;
        stringstream c1;
        cin>>n;
        c1<<n;
        string s;
        s=c1.str();
        while(n>0)
        {
            rem=n%2;
            n=n/2;
            if(rem==1)
                c++;
            //cout<<rem;

        }
        int s1=0;
        l=s.size();
        for(i=l-1,j=0; i>=0,j<l; i--,j++)
        {
            v=s[i]-'0';
            v1=pow(16,j);
            s1=s1+v*v1;



        }//cout<<s1;
        //cout<<endl;
        while(s1>0)
        {
            rem=s1%2;
            s1=s1/2;
            if(rem==1)
                c2++;
            //cout<<rem;

        }
        cout<<c<<" "<<c2<<endl;
    }






    return 0;


}

