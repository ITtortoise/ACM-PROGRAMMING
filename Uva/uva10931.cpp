#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[10000],i,m,p,j;
    while(cin>>n)
    {
        if(n==0)
            break;
        i=0,m=0,p=0;
        while(n>0)
        {
            a[i]=n%2;
            p++;
            if(a[i]==1)
                m++;
            n=n/2;
            i++;

        }
        cout<<"The parity of ";
        for(j=p-1; j>=0; j--)
            cout<<a[j];
        cout<<" is "<<m<<" (mod 2)."<<endl;
    }
    return 0;

}

