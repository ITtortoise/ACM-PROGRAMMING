#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,p[1000],q[1000],i,j,k=0,t1=0,t2=0,u=0;
    cin>>s>>n;
    for(i=0;i<n;i++)
     cin>>p[i]>>q[i];
     for(i=0;i<n-1;i++)
     {
         for(j=i+1;j<n;j++)
         {
             if(p[i]>p[j])
             {
                 t1=p[i];
                 p[i]=p[j];
                 p[j]=t1;
                 t2=q[i];
                 q[i]=q[j];
                 q[j]=t2;
             }

         }
     }
     //cout<<p[0]<<p[1]<<" "<<q[0]<<q[1];
     for(i=0;i<n;i++)
     {
         if(s>p[i])
         {
             s=s+q[i];
             u++;
         }
     }
     if(u==n)
        cout<<"YES";
    else
        cout<<"NO";

}
