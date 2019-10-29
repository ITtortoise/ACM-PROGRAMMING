#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--!=0)
    {
        char s[1000];
        int i,j,k,l,one=0,two=0;
        cin>>s;
        l=strlen(s);
        if(l>3)
            cout<<"3"<<endl;
        else if(l==3)
        {
            for(i=0; i<l; i++)
            {
                if(s[i]=='o'||s[i]=='n'||s[i]=='e')
                    one++;
                if(s[i]=='t'||s[i]=='w'||s[i]=='o')
                    two++;
            }
            //cout<<one<<two<<endl;
            if(one>=two)
                cout<<"1"<<endl;
            else
                cout<<"2"<<endl;


        }
    }

}
