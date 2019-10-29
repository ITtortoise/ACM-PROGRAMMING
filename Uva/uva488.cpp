#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,t;
    cin>>T;
    for(t=0; t<T; t++)
    {
        int n,i,j,k,l,p,q,m=0;
        cin>>n>>q;
        for(p=1; p<=q; p++)
        {
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=i; j++)
                    cout<<i;
                cout<<endl;
            }
            for(k=n-1; k>0; k--)
            {
                for(l=1; l<=k; l++)
                    cout<<k;
                cout<<endl;
            }
             if(p!=q)
             cout<<endl;

        }
        if(t!=T-1)
        cout<<endl;
    }
}
