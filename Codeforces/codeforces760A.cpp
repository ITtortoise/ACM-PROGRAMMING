#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,a[1000000],k=0;
    cin>>n;
    for(i=0;i<n;i++)
        {cin>>a[i];}
    for(i=0;i<n;i++)
    {if(a[i]==a[i+1])
            k==1;
        else if(a[i]!=a[i+1])
            k++;}
    cout<<k;
}
