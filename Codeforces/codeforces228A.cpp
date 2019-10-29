#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k=0,a[100000];
    //cin>>n;
    for(i=0;i<4;i++)
      {cin>>a[i];}
    sort(a,a+4);
    for(i=0;i<4;i++)
    {
        if(a[i]==a[i+1])
            k++;
    }cout<<k;
}
