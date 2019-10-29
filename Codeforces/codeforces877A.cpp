#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k=0;
    string s;
    getline(cin,s);
    for(i=0;i<s.size();i++)
    {
                if(s[i]=='D'&&s[i+1]=='a'&&s[i+2]=='n'&&s[i+3]=='i'&&s[i+4]=='l')
                {

                  k++;
                  i=i+4;
                }
                else if(s[i]=='O'&&s[i+1]=='l'&&s[i+2]=='y'&&s[i+3]=='a')
                {
                  k++;
                  i=i+3;
                }
                else if(s[i]=='S'&&s[i+1]=='l'&&s[i+2]=='a'&&s[i+3]=='v'&&s[i+4]=='a')
                {

                  k++;
                  i=i+4;
                }
                else if(s[i]=='A'&&s[i+1]=='n'&&s[i+2]=='n')
                {
                  k++;
                  i=i+2;
                }
                else if(s[i]=='N'&&s[i+1]=='i'&&s[i+2]=='k'&&s[i+3]=='i'&&s[i+4]=='t'&&s[i+5]=='a')
                {
                  k++;
                  i=i+5;
                }


    }
    if(k==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}

