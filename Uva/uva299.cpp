#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,j,t,h=0,T;
     cin>>n;
     int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                h++;
                t=a[i];
                a[i]=a[j];
                a[j]=t;


            }
        }
    }
    cout<<"Minimum exchange operations"<<" "<<":"<<" "<<h<<endl;
    return 0;

}
