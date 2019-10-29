#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--!=0)
    {
        long long n;
        cin>>n;
        n=n*567;
        n=n/9;
        n=n+7492;
        n=n*235;
        n=n/47;
        n=n-498;
        n=n/10;
        n=n%10;
        cout<<fabs(n)<<endl;
    }
}
