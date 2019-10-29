#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t,n;
    string a;
    cin>>a;
    n=a.length();
       for(i=0;i<n;i=i+2)
       {
           for(j=i+2;j<n;j=j+2)
           {
               if(a[i]>a[j])
               {
                   t=a[i];
                   a[i]=a[j];
                   a[j]=t;
               }
           }
           cout<<a[i];
           if((i+1)==n)
             break;
           else
            cout<<"+";
       }
       return 0;
}

