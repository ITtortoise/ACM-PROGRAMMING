#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[100000],i,j,k,p;
    double p2;
    scanf("%lld",&n);
    for(i=0; i<n; i++)
         scanf("%lld",&a[i]);
    for(i=0; i<n; i++)
    {
        k=0;
        p=sqrt(a[i]);
        p2=sqrt(a[i]);
        //cout<<p2<<" ";
        if(p2-p>0||a[i]<4)
            printf("NO\n");
        else if(p2==2)
            printf("YES\n");

        else
        {
            for(j=3; j<=sqrt(p); j+=2)
            {
                if(p%j==0)
                    k++;
            }
            if(p%2==0)
                k++;
            if(k==0)
              printf("YES\n");
            else if(k>0)
                printf("NO\n");

        }
        //cout<<k<<endl;
    }

}