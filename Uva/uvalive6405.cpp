#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 999999
long long a[sz];
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    while(cin>>n)
    {
        if(n==0)
            break;
        ll rem;
        double s=0.0,p=0.0,g=0.0,r;
        r=n/7;
        rem=n%7;
        if(rem==0)
            cout<<"0.0"<<" "<<fixed<<setprecision(1)<<r<<" "<<fixed<<setprecision(1)<<r<<" "<<fixed<<setprecision(1)<<r<<endl;
        else if(rem==1)
            cout<<"0.0"<<" "<<fixed<<setprecision(1)<<r+0.5<<" "<<fixed<<setprecision(1)<<r+0.5<<" "<<fixed<<setprecision(1)<<r<<endl;
        else if(rem==2)
            cout<<"1.0"<<" "<<fixed<<setprecision(1)<<r+0.5<<" "<<fixed<<setprecision(1)<<r+0.5<<" "<<fixed<<setprecision(1)<<r<<endl;
        else if(rem==3)
            cout<<"0.5"<<" "<<fixed<<setprecision(1)<<r<<" "<<fixed<<setprecision(1)<<r<<" "<<fixed<<setprecision(1)<<r+0.5<<endl;
        else if(rem==4)
            cout<<"0.5"<<" "<<fixed<<setprecision(1)<<r+0.5<<" "<<fixed<<setprecision(1)<<r+0.5<<" "<<fixed<<setprecision(1)<<r+0.5<<endl;
        else if(rem==5)
            cout<<"0.5"<<" "<<fixed<<setprecision(1)<<r+1.0<<" "<<fixed<<setprecision(1)<<r+1.0<<" "<<fixed<<setprecision(1)<<r+0.5<<endl;
        else if(rem==6)
            cout<<"0.0"<<" "<<fixed<<setprecision(1)<<r+0.5<<" "<<fixed<<setprecision(1)<<r+0.5<<" "<<fixed<<setprecision(1)<<r+1.0<<endl;
    }
    return 0;


}

