#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,j,k;
    cin>>n>>m;
    if(m<n*2)
    {
        if(m<=n)
        {
            if(m%2==0)
                cout<<m/2-1<<endl;
            else
                cout<<m/2<<endl;

        }
        else
        {
            long long t=m-n;
            if((n-t)%2==0)
                cout<<(n-t)/2<<endl;
            else
                cout<<(n-t)/2+1<<endl;

        }
    }
    else
        cout<<0<<endl;

}
