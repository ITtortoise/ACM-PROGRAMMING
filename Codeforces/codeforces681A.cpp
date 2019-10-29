#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,j,k=0,br,ar;
    char s[10000];
    cin>>n;
    for(i=0;i<n;i++)
     {
         cin>>s>>br>>ar;
         if(br>=2400)
          {
           if(ar>br)
            k++;
          }
          getchar();
      }
      if(k>0)
      cout<<"YES";
      else
        cout<<"NO";
}
