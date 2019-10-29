#include<bits/stdc++.h>
#define sc scanf
#define pf printf
#define sz 10000
typedef long long LL;
using namespace std;
int main()
{
    LL n,rem;
    cin>>n;
    rem=n%4;
    if(n==0)
        cout<<"1"<<endl;
    else if(rem==0)
        cout<<"6"<<endl;
    else if(rem==1)
        cout<<"8"<<endl;
    else if(rem==2)
        cout<<"4"<<endl;
    else if(rem==3)
        cout<<"2"<<endl;
    else if(rem==4)
        cout<<"6"<<endl;
}

