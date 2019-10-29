#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    int N,i,I=0,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,S=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
    cin>>N>>s;
    for(i=0;s[i]!='\0';i++)
    {
            if(s[i]=='A'||s[i]=='a')
              a=1;
            else if(s[i]=='B'||s[i]=='b')
            b=1;
            else if(s[i]=='C'||s[i]=='c')
             c=1;
            else if(s[i]=='D'||s[i]=='d')
             d=1;
            else if(s[i]=='E'||s[i]=='e')
              e=1;
            else if(s[i]=='F'||s[i]=='f')
              f=1;
            else if(s[i]=='G'||s[i]=='g')
             g=1;
            else if(s[i]=='H'||s[i]=='h')
             h=1;
            else if(s[i]=='I'||s[i]=='i')
             I=1;
            else if(s[i]=='J'||s[i]=='j')
             j=1;
            else if(s[i]=='K'||s[i]=='k')
            k=1;
            else if(s[i]=='L'||s[i]=='l')
            l=1;
            else if(s[i]=='M'||s[i]=='m')
             m=1;
            else if(s[i]=='N'||s[i]=='n')
             n=1;
            else if(s[i]=='O'||s[i]=='o')
            o=1;
            else if(s[i]=='P'||s[i]=='p')
            p=1;
            else if(s[i]=='Q'||s[i]=='q')
            q=1;
            else if(s[i]=='R'||s[i]=='r')
             r=1;
            else if(s[i]=='S'||s[i]=='s')
             S=1;
            else if(s[i]=='T'||s[i]=='t')
             t=1;
            else if(s[i]=='U'||s[i]=='u')
            u=1;
            else if(s[i]=='V'||s[i]=='v')
             v=1;
            else if(s[i]=='W'||s[i]=='w')
             w=1;
            else if(s[i]=='X'||s[i]=='x')
            x=1;
            else if(s[i]=='Y'||s[i]=='y')
             y=1;
            else if(s[i]=='Z'||s[i]=='z')
            z=1;


    }
    if(a==1&&b==1&&c==1&&d==1&&e==1&&f==1&&g==1&&h==1&&I==1&&j==1&&k==1&&l==1&&m==1&&n==1&&o==1&&p==1&&q==1&&r==1&&S==1&&t==1&&u==1&&v==1&&w==1&&x==1&&y==1&&z)
        cout<<"YES";
        else
            cout<<"NO";

}
