/* Calculate Permutation and Combination (nCr and nPr)
   Using Function */
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
   int n,c,r,ncr,npr;
   long int fact( int );  /* function Prototype */
   clrscr();
   printf("Enter the Value of n and r, n must be n>r :\n");
   scanf("%d%d",&n,&r);
   ncr= fact(n)/fact(n-r);
   npr= fact(n)/(n*fact(n-r));

   printf("NCR = %d\n",ncr);
   printf("NPR = %d\n",npr);
   getch();
}
   long int fact( int x)
   {
     long int f=1;
     int i;
     for(i=1;i<=x;i++)
       f=f*i;
     return(f);
   }
