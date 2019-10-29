#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[12],b[12],n,cas=0;
    while(~scanf("%d",&n))
    {
        if(n<0) break;
        printf("Case %d:\n",++cas);
        for(int i=0;i<12;i++) cin>>a[i];
        for(int i=0;i<12;i++) cin>>b[i];
        int sum=n;
        for(int i=0;i<12;i++)
        {
            if(b[i]<=sum)
            {
                puts("No problem! :D");
                sum-=b[i];

            }
            else puts("No problem. :(");
            sum+=a[i];
        }
      //  cout<<endl;

    }


    return 0;
}
