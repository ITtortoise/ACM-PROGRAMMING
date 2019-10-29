#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,a,b,f1=0,f2=0,d=0,t1,t2,t3;
    cin>>a>>b;
    for(i=1; i<=6; i++)
    {
        t1=abs(a-i);
        t2=abs(b-i);
        if(t1<t2)
            f1++;
        else if(t2<t1)
            f2++;
        else if(t1==t2)
            d++;

    }
    cout<<f1<<" "<<d<<" "<<f2<<endl;

}
