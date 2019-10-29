#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,p,a[100000],k=0,l=0,i,x=0,y=0,s=0;
    cin>>n>>b>>p;
    for(i=0;i<n;i++)
        {cin>>a[i];
        if(a[i]==1)
            k++;

        else if(a[i]==2)
            l++;}
        if(b>=k)
        {x=b-k;
        y=l-(p+x);
        if(y>=0)
            cout<<y;
            else
                cout<<"0";}

        else if(b<k)
            {x=k-b;
            y=l-p;
            if(y>0)
                s=x+y;
            else
                s=x;
            cout<<s;}





}
