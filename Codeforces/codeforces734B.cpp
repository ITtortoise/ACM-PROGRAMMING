#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,sum=0,a[10000],p[10000],m,n,two=0;

         cin>>a[0]>>a[1]>>a[2]>>a[3];
         p[0]=a[0];
         p[1]=a[2];
         p[2]=a[3];
         sort(p,p+3);
         //cout<<p[0]<<p[1]<<p[2];
         sum=sum+(p[0]*256);
         //cout<<sum<<endl;
          two=a[0]-p[0];
          //cout<<two<<endl;
          if(two>0)
          {
              sum=sum+(32*min(two,a[1]));
          }
          cout<<sum;


}
