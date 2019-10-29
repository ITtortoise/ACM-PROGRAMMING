#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 999999
int long long a[sz];
using namespace std;
typedef long long ll;
int main()
{
    ll tax1,t,p;
    double taka,tax;
    cin>>t;
    for(p=1; p<=t; p++)
    {
        cin>>taka;
        tax=0;
        tax1=0;
        if(taka<=180000)
            cout<<"Case "<<p<<": 0";
        else if(taka<=180000+300000)
        {
            taka=taka-180000;
            tax1=tax1+(taka*10)/100;
            tax=tax+(taka*10)/100;
            if(tax<=2000)
                cout<<"Case "<<p<<": 2000";
            else if(tax-tax1>0)
                printf("Case %lld: %lld",p,tax1+1);
            else if(tax-tax1==0)
                printf("Case %lld: %lld",p,tax1);
        }
        else if(taka<=180000+300000+400000)
        {
            taka=taka-180000-300000;
            tax1=30000+(taka*15)/100;
            tax=30000+(taka*15)/100;
            if(tax-tax1>0)
                printf("Case %lld: %lld",p,tax1+1);
            else
                printf("Case %lld: %lld",p,tax1);
        }
        else if(taka<=180000+300000+400000+300000)
        {
            taka=taka-180000-300000-400000;
            tax1=30000+60000+(taka*20)/100;
            tax=30000+60000+(taka*20)/100;
            if(tax-tax1>0)
                printf("Case %lld: %lld",p,tax1+1);
            else
                printf("Case %lld: %lld",p,tax1);
        }
        else if(taka>180000+300000+400000+300000)
        {
            taka=taka-180000-300000-400000-300000;
            tax1=30000+60000+60000+(taka*25)/100;
            tax=30000+60000+60000+(taka*25)/100;
            if(tax-tax1>0)
                printf("Case %lld: %lld",p,tax1+1);
            else
                printf("Case %lld: %lld",p,tax1);
        }
        cout<<endl;
    }
    return 0;


}

