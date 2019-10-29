#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,B=0,b=0,s=0,l=0,r=0,u=0,a=0;
    string s1;
    getline(cin,s1);
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]=='B')
            B++;
        else if(s1[i]=='b')
            b++;
        else if(s1[i]=='s')
            s++;
        else if(s1[i]=='l')
            l++;
        else if(s1[i]=='r')
            r++;
        else if(s1[i]=='u')
            u++;
        else if(s1[i]=='a')
            a++;

    }


}
