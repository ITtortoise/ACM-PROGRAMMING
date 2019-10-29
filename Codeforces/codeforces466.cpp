#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,arr[10000],x=0,y=0,z=0;
    cin>>n>>m>>a>>b;
    if(m>=n&&b<(a*n))
    {cout<<b;
    goto e;}
    arr[0]=a*n;
    x=n/m;
    y=n%m;
    arr[1]=(x*b)+b;
    arr[2]=(x*b)+(y*a);
    sort(arr,arr+3);
    cout<<arr[0];
    e:
        return 0;
}
