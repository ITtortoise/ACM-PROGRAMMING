#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,x,c=0,i,j;
        cin>>n>>x;
        if(n<=x)
        {
            for(i=1;i<=n;i++)
             for(j=n;j>0;j--)
               if(i*j==x)
                  c++;
        }
         if(n>x)
        {
            for(i=1;i<=x;i++)
             for(j=x;j>0;j--)
               if(i*j==x)
                  c++;
        }
        cout<<c;
    return 0;
}
