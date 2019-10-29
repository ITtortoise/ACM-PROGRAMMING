/* Calculate Permutation and Combination (nCr and nPr)
   Using Function */
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
  long long n,c,r,ncr,npr,cnt=0;
   long int fact( int );  /* function Prototype */
   scanf("%d%d",&n,&r);
   //npr= fact(n)/fact(n-r);
   ncr= fact(n)/(fact(r)*fact(n-r));
    printf("%d\n",ncr);
   while(ncr>0)
   {
       ncr=ncr/10;

       cnt++;
   }
   //printf("%d\n",cnt);


}
   long int fact( int x)
   {
     long int f=1;
     int i;
     for(i=1;i<=x;i++)
       f=f*i;
     return(f);
   }
