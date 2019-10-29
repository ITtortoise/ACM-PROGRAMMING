#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k=0,m=0,c=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]>b[i])
        m++;
        else if(b[i]>a[i])
            c++;
    }
    if(m>c)
        cout<<"Mishka";
    else if(c>m)
        cout<<"Chris";
    else if(c==m)
        cout<<"Friendship is magic!^^";
}
