#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,n1,m1,m,K;
    cin>>n>>m;
    n1=sqrt(n);
    m1=sqrt(m);
    for(i=2; i<=m1; i++)
    {
        if(m%i==0)
        {
            cout<<"NO"<<endl;
            goto e;
        }
    }
    for(i=n+1; i<m; i++)
    {     K=0;
        for(j=2; j<=m1; j++)
        {

            if(i%j==0)
                K++;

        }
        if(K==0)
        {
            cout<<"NO"<<endl;
            goto e;
        }

    }
cout<<"YES"<<endl;
e:

    return 0;
}



