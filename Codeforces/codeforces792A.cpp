#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,k=0,m=0,count=0,x;
    cin>>n;
    long long int a[n],b[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0; i<n-1; i++)
    {
        b[i]=fabs(a[i]-a[i+1]);

    }
    sort(b,b+n);

    for(i=0; i<n; i++)
    {

        if(b[i]==b[0])
            count++;
        else
            break;

    }
    cout<<b[0]<<" "<<count<<endl;
}
