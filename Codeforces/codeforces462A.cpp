#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 1000
typedef long long LL;
using namespace std;
int main()
{
    LL n,i,j,k=0,x1,y1,x2,y2,m=0;
    char a[sz][sz];
    sf("%lld",&n);
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            cin>>a[i][j];
    for(i=1; i<n; i++)
    {
        for(j=2; j<n; j++)
        {
            k=0;
            if(a[i][j]=='x')
            {
                x1=j-1;
                x2=j+1;
                y1=i-1;
                y2=i+1;
                if(x1>=0&&x1<=n-1)
                {
                    cout<<"left:"<<i<<x1<<endl;
                    if(a[i][x1]=='o')
                        k++;
                    cout<<k<<endl;
                }
                if(x2>=0&&x2<=n-1)
                {
                    cout<<"right:"<<i<<x2<<endl;
                    if(a[i][x2]=='o')
                        k++;
                    cout<<k<<endl;
                }
                if(y1>=0&&y1<=n-1)
                {
                    cout<<"up:"<<y1<<j<<endl;
                    if(a[y1][j]=='o')
                        k++;
                     cout<<k<<endl;
                }
                if(y2>=0&&y2<=n-1)
                {
                    cout<<"down:"<<y2<<j<<endl;
                    if(a[y2][j]=='o')
                        k++;
                    cout<<k<<endl;
                }


            }
        }

    }





}
