#include<bits/stdc++.h>
using namespace std;
int main()
{
    int e,o,s=0,i,k=0,l=0;
    cin>>e>>o;
    s=e+o;
     for(i=1;i<=s;i++)
     {
         if(i%2==0)
            k++;
         else
            l++;
     }
     if(k==e&&l==o)
        cout<<"YES"<<endl;
     else
     cout<<"NO"<<endl;

     return 0;


}
