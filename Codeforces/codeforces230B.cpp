#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[100000],i,j,k,p;
    double p2;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
    {
        k=0;
        p=sqrt(a[i]);
        p2=sqrt(a[i]);
        //cout<<p2<<" ";
        if(p2-p>0||a[i]<4)
            cout<<"NO"<<endl;
        else if(p2==2)
            cout<<"YES"<<endl;

        else
        {
            for(j=3; j<=sqrt(p); j+=2)
            {
                if(p%j==0)
                    k++;
            }
            if(p%2==0)
                k++;
            if(k==0)
                cout<<"YES"<<endl;
            else if(k>0)
                cout<<"NO"<<endl;

        }
        //cout<<k<<endl;
    }

}
