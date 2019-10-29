#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,a1[100000],a2[10000],c=0;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a1[i];
    sort(a1,a1+n);
    cin>>m;
    for(j=0; i<m; j++)
        cin>>a2[j];
    sort(a2,a2+m);
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
        {
            if(a1[i]==a2[j]||a1[i]==a2[j]+1||a1[i]==a2[j]-1)
            {
                c++;
                a2[j]=-5;
                //cout<<a2[j]<<" ";
                break;
            }
        }

    cout<<c;

}
