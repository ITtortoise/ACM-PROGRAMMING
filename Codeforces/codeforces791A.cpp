#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,b,k=0;
    cin>>l>>b;
    loop:
    l=l*3;
    b=b*2;
    k++;
    if(l>b)
        cout<<k<<endl;
    else
        goto loop;
    return 0;


}
