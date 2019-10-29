#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 99999
typedef long long LL;
using namespace std;
int main()
{
    LL n,i,j,k=1,x,y,a,b,c,d;
    cin>>a>>b>>c>>d;
    int s1=b;
    int s2=d;
    for(i=0; i<10000; i++)
    {
        if(s1==s2)
        {
            cout<<s1<<endl;
            return 0;
        }
        else if(s1<s2)
        {
            s1=s1+a;
            //cout<<s1<<" ";
        }
        else if(s2<s1)
        {
            s2=s2+c;
            //cout<<s2<<" ";
        }

        k++;

    }
    cout<<"-1"<<endl;



}
