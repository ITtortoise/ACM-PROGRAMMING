#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k=0,m=0;
    cin>>n;
    int a[n],c[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            {b[k]=i;
            k++;}

        else
            {
            c[m]=i;
            m++;}
    }
    if(k==1)
        cout<<b[0]+1;
    else if(m==1)
        cout<<c[0]+1;
}
