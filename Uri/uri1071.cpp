#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,sum=0;
    cin>>a>>b;
    for(i=b;i<=a;i++)
    {
        if(i%2!=0)
        {cout<<i<<" ";
            sum=sum+i;}
    }
    cout<<sum;
}
