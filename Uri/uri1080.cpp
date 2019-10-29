#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a[1000],v,b[1000];
    for(i=0;i<100;i++)
        {cin>>a[i];
        b[i]=a[i];}

    sort(a,a+100);
    v=a[99];
    cout<<v<<endl;;
    for(i=0;i<100;i++)
        {if(b[i]==v)
            cout<<i+1<<endl;}

    return 0;
}
