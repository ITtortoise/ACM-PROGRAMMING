#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,v=0,x,y,t=0;
    cin>>n>>m;
    int a[m],b[m];
    for(i=0;i<m;i++)
        cin>>a[i];
    sort(a,a+m);
    /*for(i=0;i<m;i++)
        {cout<<a[i]<<" ";}
        cout<<endl<<endl<<endl;*/
    for(x=0,y=n-1;y<m;x++,y++)
    {
         //cout<<a[y]<<" "<<a[x]<<":";
         b[t]=a[y]-a[x];
        //cout<<b[t]<<endl;
         t++;
         //cout<<x<<y;

    }
    sort(b,b+t);
    cout<<b[0];

}
