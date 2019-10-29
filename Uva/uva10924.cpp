#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[1000];
    int ln,sum,li,mn;
    while(cin>>ch)
    {ln=strlen(ch);
    //cout<<ln<<endl;
    sum=0;
    mn=0;
    for(li=0;li<ln;li++)
    {
        if(ch[li]=='a')
            sum=sum+1;
        else if(ch[li]=='b')
            sum=sum+2;
        else if(ch[li]=='c')
            sum=sum+3;
        else if(ch[li]=='d')
            sum=sum+4;
        else if(ch[li]=='e')
            sum=sum+5;
         else if(ch[li]=='f')
            sum=sum+6;
        else if(ch[li]=='g')
            sum=sum+7;
            else if(ch[li]=='h')
            sum=sum+8;
        else if(ch[li]=='i')
            sum=sum+9;
        else if(ch[li]=='j')
            sum=sum+10;
        else if(ch[li]=='k')
            sum=sum+11;
            else if(ch[li]=='l')
            sum=sum+12;
        else if(ch[li]=='m')
            sum=sum+13;
         else if(ch[li]=='n')
            sum=sum+14;
        else if(ch[li]=='o')
            sum=sum+15;
        else if(ch[li]=='p')
            sum=sum+16;
        else if(ch[li]=='q')
            sum=sum+17;
        else if(ch[li]=='r')
            sum=sum+18;
        else if(ch[li]=='s')
            sum=sum+19;
        else if(ch[li]=='t')
            sum=sum+20;
        else if(ch[li]=='u')
            sum=sum+21;
         else if(ch[li]=='v')
            sum=sum+22;
        else if(ch[li]=='w')
            sum=sum+23;
        else if(ch[li]=='x')
            sum=sum+24;
        else if(ch[li]=='y')
            sum=sum+25;
        else if(ch[li]=='z')
            sum=sum+26;
         if(ch[li]=='A')
            sum=sum+27;
        else if(ch[li]=='B')
            sum=sum+28;
        else if(ch[li]=='C')
            sum=sum+29;
        else if(ch[li]=='D')
            sum=sum+30;
        else if(ch[li]=='E')
            sum=sum+31;
         else if(ch[li]=='F')
            sum=sum+32;
        else if(ch[li]=='G')
            sum=sum+33;
            else if(ch[li]=='H')
            sum=sum+34;
        else if(ch[li]=='I')
            sum=sum+35;
        else if(ch[li]=='J')
            sum=sum+36;
        else if(ch[li]=='K')
            sum=sum+37;
            else if(ch[li]=='L')
            sum=sum+38;
        else if(ch[li]=='M')
            sum=sum+39;
         else if(ch[li]=='N')
            sum=sum+40;
        else if(ch[li]=='O')
            sum=sum+41;
        else if(ch[li]=='P')
            sum=sum+42;
        else if(ch[li]=='Q')
            sum=sum+43;
        else if(ch[li]=='R')
            sum=sum+44;
        else if(ch[li]=='S')
            sum=sum+45;
        else if(ch[li]=='T')
            sum=sum+46;
        else if(ch[li]=='U')
            sum=sum+47;
         else if(ch[li]=='V')
            sum=sum+48;
        else if(ch[li]=='W')
            sum=sum+49;
        else if(ch[li]=='X')
            sum=sum+50;
        else if(ch[li]=='Y')
            sum=sum+51;
        else if(ch[li]=='Z')
            sum=sum+52;



    }//cout<<sum;
    int ki=0;
    mn=sqrt(sum);
    for(int li=2;li<=mn;li++)
    {
        if(sum%li==0)
            ki++;
    }
    if(ki==0)
        cout<<"It is a prime word."<<endl;
    else if (ki>0)
        cout<<"It is not a prime word."<<endl;}

}
