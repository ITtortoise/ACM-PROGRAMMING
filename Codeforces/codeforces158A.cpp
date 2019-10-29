#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],i,j=0,n,k,A[100],c=0,m;

    cin>>n>>k;
        m=k;
    for(i=0;i<n;i++)
        {cin>>a[i];}
    for(i=0;i<n;i++)
       {
           if(a[i]==0)
            {break;}
       else
         {
            A[j]=a[i];
            j++;
            c++;}
                 }
                /* cout<<c<<endl;
                for(j=0;j<c;j++)
                {cout<<A[j];}
                  cout<<endl;*/

       if(c<=k)
        {cout<<c;
          goto e;}
        else
         {for(j=k;j<c;j++)
              {if(A[k-1]==A[j])
                m++;}
         }
         cout<<m;
e:
    return 0;

}
