#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000],i,s1=0,s2=0,s3=0,j,k,t=0;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
     for(i=1;i<=n;i=i+3)
         {s1=s1+a[i];}
         a[t]=s1;
         t++;
        for(j=2;j<=n;j=j+3)
         {s2=s2+a[j];}
         a[t]=s2;
         t++;
     for(k=3;k<=n;k=k+3)
         {s3=s3+a[k];}
         a[t]=s3;
         t++;
         sort(a,a+t);
         //cout<<a[t-1];
         if(a[t-1]==s1)
            cout<<"chest";
         else if(a[t-1]==s2)
            cout<<"biceps";
         else if(a[t-1]==s3)
            cout<<"back";
}
