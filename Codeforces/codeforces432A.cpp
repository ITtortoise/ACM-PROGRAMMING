#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,k=0,d=0,p;
    cin>>n>>p;
    int a[n];
    for(i=0;i<n;i++)
     {cin>>a[i];
     d=5-a[i];
     if(d<=5&&d>=p)
        k++;}
     cout<<(k/3);



}
