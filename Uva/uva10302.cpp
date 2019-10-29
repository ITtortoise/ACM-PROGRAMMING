#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,s,c;
    while(cin>>n)
    {
        s=0;
        for(i=1; i<=n; i++)
        {
            s=s+pow(i,3);

        }
        cout<<s<<endl;
    }
}
