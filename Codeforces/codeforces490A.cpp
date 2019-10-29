#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n,i,j,k=0,l=0,m=0,a[10000],a1[100000],s1[100000],s2[100000],s3[100000],q=0,r=0,t=0;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
    {
        if(a[i]==1)
            {k++;
             a1[0]=k;}
        else if(a[i]==2)
            {l++;
            a1[1]=l;}
        else if(a[i]==3)
            {m++;
            a1[2]=m;}
    }
      sort(a1,a1+3);
      m=a1[0];
      if(m==0)
        {cout<<"0"<<endl;
         goto e;}
      cout<<m<<endl;
      for(i=0; i<n; i++)
      {
          if(a[i]==1)
            {s1[q]=i;
              q++;}
          else if(a[i]==2)
          {
              s2[r]=i;
               r++;
          }
          else if(a[i]==3)
          {
              s3[t]=i;
               t++;
          }
      }

       for(i=0;i<m;i++)
        cout<<s1[i]+1<<" "<<s2[i]+1<<" "<<s3[i]+1<<endl;

e:
    return 0;
}
