#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0,l1=0,l2=0,y=0,z=0,l=0,l3=0,t=0,r=0;
    char s1[1000],s2[10000],s3[1000000],s4[100000];
    cin>>s1;
    getchar();
    cin>>s2;
    getchar();
    cin>>s3;
    l1=strlen(s1);
    l2=strlen(s2);
    l3=strlen(s3);
    l=l1+l2;
    //cout<<l3<<l;
    for(i=0; i<l; i++)
    {
        if(i<l1)
        {s4[k]=s1[y];
            y++;
            //cout<<s4[k];
            k++;
        }
        else
        {
            s4[k]=s2[z];
            z++;
           //cout<<s4[k];
            k++;
        }
    }
    sort(s3,s3+l3);
    sort(s4,s4+l);
      /*for(i=0;i<l3;i++)
        {cout<<s3[i];}
        cout<<endl;
    for(i=0;i<l;i++)
        {cout<<s4[i];}
        cout<<endl;*/

  for(i=0;i<max(l3,l);i++)
     {

         if(s3[i]!=s4[t])
         {
             r++;
         }
         t++;

     }
     //cout<<r<<endl;
     if(r>0)
        cout<<"NO";
     else
        cout<<"YES";
            return 0;
}
