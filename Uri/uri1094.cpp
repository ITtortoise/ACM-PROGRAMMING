#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,x=0,y=0,z=0,t;
    double p,q,r;
    char c;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>a>>c;
        if(c=='C')
            x=x+a;
        else if(c=='S')
            y=y+a;
        else if(c=='R')
            z=z+a;
    }
    p=(x*100)/(x+y+z);
    q=(y*100)/(x+y+z);
    r=(z*100)/(x+y+z);
    cout<<"Total: "<<x+y+z<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<x<<endl;
    cout<<"Total de ratos: "<<z<<endl;
    cout<<"Total de sapos: "<<y<<endl;
    printf("Percentual de coelhos: %.2f %%\n",p);
    printf("Percentual de ratos: %.2f %%\n",r);
    printf("Percentual de sapos: %.2f %%\n",q);


}
