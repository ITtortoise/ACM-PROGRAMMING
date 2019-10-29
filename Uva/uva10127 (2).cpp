#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 99
long long a[sz];
using namespace std;
typedef long long ll;
int main()
{
    ll n,m=1,i=10,j,k=1,l,c=1,p,q,amt[sz];
    string s,s1;
    cin>>n;

    while(m%n!=0)
    {
        c++;
        m=(m*i)+k;

    }
    cout<<c;



    return 0;

}
