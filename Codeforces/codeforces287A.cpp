#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0,x,y,h;
    char a[100];
    for(i=1;i<=16;i++)
        {cin>>a[i];}
    h=1;
    for(j=1;j<=9;j++)
    {    x=0;
         y=0;
        if(a[h]=='.')
            x++;
        if(a[h]=='#')
            y++;
        if(a[h+1]=='.')
            x++;
        if(a[h+1]=='#')
            y++;
        if(a[h+4]=='.')
            x++;
        if(a[h+4]=='#')
            y++;
        if(a[h+5]=='.')
            x++;
        if(a[h+5]=='#')
            y++;
        //cout<<x<<" "<<y<<endl;
        if(x>=3||y>=3)
           {k++;
               cout<<"YES";
             break;}
         h++;
         if(h==4||h==8)
           {h++;}


        }
        if(k==0)
            cout<<"NO";

}
