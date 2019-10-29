#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  T,t,k;
    cin>>T;
    getchar();
    for(t=1; t<=T; t++)
    {
        int k=0;
        string s;
        getline(cin,s);
        for(int i=0; s[i]!='\0'; i++)
        {
            if(s[i]=='a'||s[i]=='d'||s[i]=='g'||s[i]=='j'||s[i]=='m'||s[i]=='p'||s[i]=='t'||s[i]=='w'||s[i]==' ')
                k=k+1;
            else if(s[i]=='b'||s[i]=='e'||s[i]=='h'||s[i]=='k'||s[i]=='n'||s[i]=='q'||s[i]=='u'||s[i]=='x')
                k=k+2;
            else if(s[i]=='c'||s[i]=='f'||s[i]=='i'||s[i]=='l'||s[i]=='o'||s[i]=='r'||s[i]=='v'||s[i]=='y')
                k=k+3;
            else //if(s[i]=='s'||s[i]=='z')
                k=k+4;

        }
        cout<<"Case #"<<t<<": "<<k<<endl;
    }

}
