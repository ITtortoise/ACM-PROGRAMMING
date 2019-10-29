#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100],m,temp,j,sum=0,o;
    cin>>n;
    if(n==1)
    {
        cin>>o;
        cout<<"0"<<endl;
        goto e;
    }
    for(int k=0; k<n; k++)
    {
        cin>>a[k];
    }
    for(int i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        //cout<<a[i];
    }
    //cout<<a[n-1];
    for(int t=0; t<n; t++)
    {
        sum=sum+(a[n-1]-a[t]);
    }
    cout<<sum;
e:
    return 0;
}
