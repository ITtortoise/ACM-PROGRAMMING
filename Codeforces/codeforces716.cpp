#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,i,j,k,m=0,v;
    cin>>n>>c;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-1;i++)
    {

        if(a[i+1]-a[i]<=c)
            k++;
       else if(a[i+1]-a[i]>c)
            k=0;
    }

    if(n==1)
    cout<<"1"<<endl;
    else
    cout<<k+1<<endl;
}
