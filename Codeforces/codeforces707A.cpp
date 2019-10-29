#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,p=0,w=0,c=0;
    char s[10000];
    cin>>a>>b;
    p=a*b;
    for(i=0;i<p;i++)
    {cin>>s[i];}
    for(i=0;i<p;i++)
        {if(s[i]=='W'||s[i]=='B'||s[i]=='G')
             w++;
        else if(s[i]=='C'||s[i]=='M'||s[i]=='Y')
            c++;
            }
if(w==p)
    cout<<"#Black&White"<<endl;
else
    cout<<"#Color"<<endl;
}
