#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t,i,j;
    int a[100];
    while(cin>>n)
    {
        if(n<0)
           break;
        else if(n==0)
            cout<<0;
        else
        {int j=0;
        while(n!=0)
        {
          a[j] = n%3;
          n=n/3;
          //cout<<a[j]<<endl;
            j++;

        }
        for(i=j-1;i>=0;i--)
         {cout<<a[i];}
        }
         cout<<endl;

    }
    return 0;
}

