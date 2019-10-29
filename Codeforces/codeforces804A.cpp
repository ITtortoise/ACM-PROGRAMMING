#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 10000
typedef long long LL;
using namespace std;
int main()
{

    LL n,i,j,k,rem,s1=0,s=0;
    cin>>n;
    if(n%2!=0)
        cout<<n/2;
    else
    {
        for(i=1; i<n; i++)
        {
            rem=(i+(i+1))%(n+1);
            s=s+rem;
            if(rem==0)
            {
                s1=s;
                s=0;
            }
        }
        cout<<s1-s<<endl;
    }


}

