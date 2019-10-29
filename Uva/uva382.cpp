#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,s,i,h,a,k=0,sum;

    while(cin>>n)
    {
        if(n==0)
            {break;}
            if(k==0)
                cout<<"PERFECTION OUTPUT"<<"\n";
            k=1;
        s=0;
        sum=0;


        for(i=1; i<n; i++)
        {
            if(n%i==0)
                sum=sum+i;
        }
        if(sum==n)
            printf("%5lld  PERFECT\n",n);
        else if(sum<n)
             printf("%5lld  DEFICIENT\n",n);
        else
             printf("%5lld  ABUNDANT\n",n);

    }

    cout<<"END OF OUTPUT"<<"\n";
    return 0;

}
