#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n=0,j=0,k=0;
    char c1[10000],c2[10000],c3[10000];
    cin>>c1;
    getchar();
    cin>>c2;
    for(i=0; c1[i]!='\0'; i++)
    {
        n++;
    }
    //cout<<n<<endl;
    for(i=n-1; i>=0; i--)
    {
        c3[j]=c1[i];
        j++;
    }
    c3[j]='\0';
    //cout<<c3;
     int n1=strcmp(c3,c2);
    if(n1==0)
        {cout<<"YES"<<endl;}
    else if(n!=0)
        {cout<<"NO"<<endl;}

    return 0;


}

