#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Q=0,W=0,E=0,R=0,T=0,Y=0,U=0,D=0,A[100],i,j,t,mini=0,e,kaj=0;
    char s1[100000];
    cin>>s1;


    for( i=0; s1[i]!='\0'; i++)
    {
        if(s1[i]=='B')
        {
            Q++;
            A[0]=Q;
        }
        if (s1[i]=='u')
             W++;

        if (s1[i]=='l')
        {
            E++;
            A[1]=E;
        }
         if (s1[i]=='b')
        {
            R++;
            A[2]=R;
        }
         if (s1[i]=='a')
           Y++;

         if (s1[i]=='s')
        {
            U++;
            A[3]=U;
        }
         if (s1[i]=='r')
        {
            D++;
            A[4]=D;
        }

    }
    if(A[0]==0||A[1]==0||A[2]==0||A[3]==0||A[4]==0||Y==0||W==0)
        {cout<<"0";
          goto en;}
    sort(A,A+5);
    mini=A[0];
      for(e=mini;e>0;e--)
      {
          if(Y>=(2*e)&&(W>=(2*e)))
          {   kaj++;
              cout<<e;
              break;
          }

      }
      if(kaj==0)
        cout<<"0"<<endl;
      en:
      return 0;


}

