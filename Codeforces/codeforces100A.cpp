#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,n1,a1=0,a2=0;
    cin>>n>>k>>n1;
    a1=(n*n);
    //cout<<a1;
    a2=k*(pow(n1,2));
    //cout<<" "<<a2;
    if(a2>=a1)
        cout<<"YES";
    else
        cout<<"NO";


}
