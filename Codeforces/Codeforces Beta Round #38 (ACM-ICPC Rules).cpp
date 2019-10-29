#include<iostream>
using namespace std;
int main()
{
    int n,d[100],a,b,i,j,sum=0,w=0;
    cin>>n;
    for(i=0;i<n-1;i++)
        {cin>>d[i];}
    cin>>a>>b;
      w=b-a;
     if(a==1&&(b<=n))
    {
        for(j=0;j<w;j++)
       sum=sum+d[j];
    }

     else if(a>1 && b==n)
    {
        for(i=a-1;i<n-1;i++)
            sum=sum+d[i];
    }
    else if(a>1 && b<n)
    {
        for(i=a-1;i<b-1;i++)
          sum=sum+d[i];
    }
      cout<<sum;
return 0;

}
