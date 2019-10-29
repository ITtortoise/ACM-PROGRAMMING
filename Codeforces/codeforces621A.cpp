#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int n,j,k=0,sum=0,a[100000],b[100000];
    cin>>n;
    for(j=0; j<n; j++)
    {
        cin>>a[j];

    }
    sort(a,a+n);
    for(j=0; j<n; j++)
    {
        if(a[j]%2!=0)
        {
            b[k]=a[j];
            k++;
        }

    }
    for(j=0; j<n; j++)
        sum=sum+a[j];
    if(sum%2==0)
        cout<<sum<<endl;
    else
    {
        cout<<sum-b[0]<<endl;
    }

}
