#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v,i,j,h=0,k=0;
    cin>>n>>v;
    int a[n],b[1000],c[1000];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        for(j=0; j<a[i]; j++)
        {
            cin>>b[j];
        }
        for(j=0;j<a[i];j++)
        {
            if(b[j]<v)
                {c[h]=i+1;
                h++;
                k++;
                break;}
        }
    }
    cout<<k<<endl;
    for(i=0;i<k;i++)
    {cout<<c[i]<<" ";}

}
