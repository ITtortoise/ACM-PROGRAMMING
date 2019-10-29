#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l1,r1,l2,r2,k,s=0,i,j;
    cin>>l1>>r1>>l2>>r2>>k;

      if(l1==r1)
     {
         if(l1==k)
            {cout<<"0";
             goto e;}
         else
            {cout<<"1";
            goto e;}
     }
     else if(l2==r2)
     {
         if(l2==k)
            {cout<<"0";
            goto e;}
         else
            {cout<<"1";
            goto e;}
     }
     else if(l1<r1)
     {if(k>=l2&&k<=r1)
       cout<<(((k-1)-l2))+((r1-(k+1)))+2;
       else if(k<l2||k>r1)
        cout<<(r1-l2)+1;
       }
     e:
         return 0;




}
