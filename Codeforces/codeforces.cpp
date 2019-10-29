#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
    int i,j,k,n,A=0,D=0;
     cin>>n;
     cin>>s;
  for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='A')
          A++;
        else if(s[i]=='D')
            D++;

    }
    if(A>D)
    cout<<"Anton"<<endl;
    else if(D>A)
        cout<<"Danik"<<endl;
    else if(D==A)
        cout<<"Friendship"<<endl;
}
