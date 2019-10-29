#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0,j=i+1;i<n&&j<n;i++,j++)
    {
        b[k]=a[i]+a[j];
        cout<<b[k]<<" ";
          k++;


    }
    cout<<a[n-1];

}
