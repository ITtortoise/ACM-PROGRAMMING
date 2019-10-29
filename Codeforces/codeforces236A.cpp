#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,s=0;
    string s1;
    getline(cin,s1);
   /* for(i=0; s1[i]!='\0'; i++)
    {
        if(s1[i]=='A'&&s1[i]=='Z')
            break;
    }*/
    for(i=0;s1[i]!='\0';i++)
    {
        s=s+i;
    }
    cout<<s;
    /*if(s%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;*/
}
