#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f,i,j,s=0,c=0;
    cin>>n>>f;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            s=i*j;
            if(s==f)
                {c++;
                break;}

        }
    }
       cout<<c;
}
