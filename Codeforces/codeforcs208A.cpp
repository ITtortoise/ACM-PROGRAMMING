#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,k,a,b,n,s,f=0;
    cin>>a>>b>>n;
    int c=0;
    c=a;
    for(i=0; i<n; i++)
    {
        for(j=0; j<=9; j++)
        {
            s=(a*10)+j;
            if(s%b==0)
            {
                a=s;
                f=1;
                break;

            }
        }
        if(f==0)
            break;

    }
    if(a>c)
        cout<<a<<endl;
    else if(a==c)
        cout<<"-1"<<endl;
}

