#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,i,j,a[10000],k=0;
    cin>>n>>h;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
      {if(a[i]>h)
          k++;}
          cout<<(k*2)+(n-k);
          return 0;
}
