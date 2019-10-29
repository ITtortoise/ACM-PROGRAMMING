#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,i,k=0,j,l=0,m=0,p=0;
    cin>>n>>c;
    int a[n],b[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0,j=i+1; i<n&&j<n; i++,j++)
    {
        //cout<<a[i]<<" "<<a[j]<<" ";

        if(a[i]>a[j])
        {
            b[k]=a[i]-a[j];

            //cout<<b[k]<<endl;
            k++;
            l++;
        }


    }
    if(k==0)
    {
        m++;
        cout<<"0";
    }
    if(m==0)
    {
    sort(b,b+l);
        p=b[k-1]-c;
        if(p>=0)
            cout<<p;
        else
            cout<<"0";
    }
}

