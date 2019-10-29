#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k=0,a[1000],x1,x2,x3,v=0,ans=0;
    cin>>x1>>x2>>x3;
    a[0]=x1;
    a[1]=x2;
    a[2]=x3;
    sort(a,a+3);
    v=a[1];
   ans=(v-a[0])+(a[2]-v);
   cout<<ans;
}
