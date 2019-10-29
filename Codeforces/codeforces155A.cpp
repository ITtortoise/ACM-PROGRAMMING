#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k=0,a[1000],m=0,p=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    p=a[0];
    for(i=1;i<n;i++)
        {if(a[i]<p)
            {k++;
            p=a[i];}
        }

    m=a[0];
    for(i=1;i<n;i++)
         {
          if(a[i]>m)
           {k++;
            m=a[i];}
         }
        cout<<k;
}
