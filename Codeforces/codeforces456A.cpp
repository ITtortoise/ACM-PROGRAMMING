#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=0,i;
    cin>>n;
    int a[n];
    int b[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]<b[i])
        {   k++;
            cout<<"Happy Alex";
            break;
        }

    }
    if(k==0)
        cout<<"Poor Alex";
}
