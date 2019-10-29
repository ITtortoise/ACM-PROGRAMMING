#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 99999
long long a[sz];
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,i,j,k,l,c,p=0,q=0,amt[sz];
    char ch;
    cin>>l;
    while(l--)
    {
        cin>>n>>ch>>m;
        if(n>=1&&n<=10)
        {
            if(m>0)
            {
                q=12-n-1;
                if(q>9)
                    cout<<q;
                else
                    cout<<"0"<<q;

                cout<<":";
                p=60-m;
                if(p>9)
                    cout<<p<<endl;
                else
                    cout<<"0"<<p<<endl;
            }
            else
                cout<<12-n<<":"<<"00"<<endl;
        }
        else if(n==11)
        {
            if(m==0)
                cout<<"01"<<":"<<"00"<<endl;

            else
            {
                cout<<12<<":";
                p=60-m;
                if(p>9)
                    cout<<p<<endl;
                else
                    cout<<"0"<<p<<endl;
            }
        }
        else if(n==12)
        {
            if(m==0)
                cout<<12<<":"<<"00"<<endl;

            else

            {
                cout<<11<<":";
                p=60-m;
                if(p>9)
                    cout<<p<<endl;
                else
                    cout<<"0"<<p<<endl;
            }
        }


    }

    return 0;
}

