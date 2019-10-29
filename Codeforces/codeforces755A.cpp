#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k,s=0;
    cin>>n;
    if(n==1)
    {
        cout<<"3";
        goto en;
    }
    if(n==2)
    {
        cout<<"4";
        goto en;
    }
    for(m=1; m<=n; m++)
    {
        s=(n*m)+1;
        for(i=2; i<s; i++)
        {
            if(s%i==0)
            {
                cout<<m;
                goto en;
            }
        }
    }
en:
    return 0;
}
