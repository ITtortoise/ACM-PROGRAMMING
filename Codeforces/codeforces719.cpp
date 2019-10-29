#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000],k=0,l=0,v;
    cin>>n;
    if(n==1)
    {
        cin>>v;
        if(v==15)
        {
            cout<<"DOWN"<<endl;
            goto en;
        }
        else if(v==0)
        {
            cout<<"UP"<<endl;
            goto en;
        }
        else
        {
            cout<<"-1"<<endl;
            goto en;
        }
    }
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    if(a[n-1]==15)
    {
        cout<<"DOWN"<<endl;
        goto en;
    }
     if(a[n-1]==0)
    {
        cout<<"UP"<<endl;

        goto en;
    }
    for(int i=0; i<n; i++)
    {
        if(a[n-1]>a[n-2])
        {
            cout<<"UP"<<endl;
            goto en;
        }
        else if(a[n-1]<a[n-2])
        {
            cout<<"DOWN"<<endl;
            goto en;
        }

    }

en:
    return 0;

}
