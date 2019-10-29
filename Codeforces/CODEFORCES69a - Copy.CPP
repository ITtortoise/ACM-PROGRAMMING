#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,j,k,n,a[10000],s=0,s1=0,s2=0;
    cin>>n;
    for(i=0;i<(3*n);i++)
        cin>>a[i];
    for(i=0;i<3*n;i=i+3)
       {s=s+a[i];}
    //cout<<s<<" ";
    for(i=1;i<3*n;i=i+3)
       {s1=s1+a[i];}
       //cout<<s1<<" ";
       for(i=2;i<3*n;i=i+3)
       {s2=s2+a[i];}
      // cout<<s2;
      if(s==0&&s1==0&&s2==0)
        cout<<"YES";
      else
        cout<<"NO";
}
