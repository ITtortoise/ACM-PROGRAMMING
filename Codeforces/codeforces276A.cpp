#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,i,j,m=0;
    cin>>n>>k;
    int a[n],b[n],c[n];
    for(i=0;i<n;i++)
        cin>>a[i]>>b[i];
    for(i=0;i<n;i++)
    {
        if(b[i]>k)
        {
            c[m]=a[i]-(b[i]-k);
            //cout<<c[m]<<" ";
            m++;
        }
        else
            {c[m]=a[i];
        //cout<<c[m]<<" ";
        m++;}

    }
    sort(c,c+m);
    cout<<c[m-1];
}

