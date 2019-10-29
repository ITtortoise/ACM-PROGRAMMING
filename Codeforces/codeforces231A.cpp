#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,c1,c2,c3,k=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>c1;
        getchar();
        cin>>c2;
        getchar();
        cin>>c3;
        getchar();
        if((c1+c2+c3)>=2)
             {k++;}
    }
    cout<<k;
    return 0;
}
