#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,c=0,k=0;
    cin>>s;
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]=='0')
        {
            k=0;
            c++;
            if(c==7)
            {
                cout<<"YES"<<endl;
                goto e;
            }

          }
        else if(s[i]=='1')
          {
            c=0;
            k++;
            if(k==7)
            {
                cout<<"YES"<<endl;
                goto e;

            }

        }


      }

    cout<<"NO"<<endl;
    e:
        return 0;

}
