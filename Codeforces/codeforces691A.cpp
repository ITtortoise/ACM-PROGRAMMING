#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,k=0,v;
    cin>>n;
    if(n==1)
    {
        cin>>v;
        if(v==1)
            {cout<<"YES";
              return 0;}
        else
            {cout<<"NO";
            return 0;}
    }
    int a[n];
    for(i=0;i<n;i++)
      {cin>>a[i];}
      sort(a,a+n);
      if(a[0]==a[1])
          cout<<"NO";
      else
        cout<<"YES";
   return 0;

}
