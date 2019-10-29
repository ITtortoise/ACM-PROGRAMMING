#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,w;
    cin>>y>>w;
    int s=(y/w);
    {cout<<"1/"<<s<<endl;
    goto e;}
    if(y==w)
        {cout<<"1/1"<<endl;
        goto e;}
    if(y<w)
        {cout<<"0/1"<<endl;
        goto e;}
        e:
        return 0;
}
