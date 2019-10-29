#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i;
    cin>>a>>b>>c;
    if(b<2 || c<4)
        {cout<<"0"<<endl;
        goto e;}
    for(i=a; i>0; i--)
    {
        if(b>=(2*i))
        {
            if(c>=(4*i))
            {
                cout<<(i+(2*i)+(4*i));
                break;
            }
        }
    }
    e:
    return 0;
}
