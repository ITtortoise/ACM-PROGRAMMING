#include<bits/stdc++.h>
using namespace std;

int main()
{
      int a[105], count;
      int bin ,i , j;
      while(scanf("%d",&bin)==1)
      {
          if(bin==0)
          {
              break;
          }
          i=0;
          while(bin>0)
          {
               a[i]=bin%2;
            cout<<a[i]<<" ";
               i++;
               bin=bin/2;
          }
          count=0;
          cout <<"The parity of ";
          for(j=i-1;j>=0;j--)
          {
                printf("%d",a[j]);
                if(a[j]==1)
                {
                  count=count+1;
                }
          }
          cout << " is " << count << " (mod 2)." << endl;
      }
 }
