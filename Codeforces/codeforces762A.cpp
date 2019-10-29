#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=0,A[10000],m,k=0;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {

        if(n%i==0)
        {
            A[j]=i;
            j++;

        }
        if(n%i==0&&i==m)
              break;
    }
    if(j<m)
    {
        cout<<"-1"<<endl;
        goto en;
    }

    cout<<A[m-1];
en:
    return 0;

}
