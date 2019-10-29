#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f,m,n,i,sum=0;
    cin>>f>>m>>n;
    for(i=1;i<=n;i++)
        sum=sum+(i*f);
    if(sum>m)
    cout<<sum-m;
    else if(sum<=m)
        cout<<"0";
return 0;
}
