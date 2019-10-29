#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {cin>>n;
    if(n<=10)
        cout<<"0"<<" "<<n<<endl;
    else if(n>10)
        cout<<n-10<<" "<<"10"<<endl;}
    return 0;
}
