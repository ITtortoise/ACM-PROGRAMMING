#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=1,k=0,l,x,y,a[100],sum=0,n;
    double t;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        {
            sum=sum+(a[i]*j);
            j++;
        }
        k=k+a[i];
    }

    t=double(sum/k);
    printf("%ld",t);
}
