#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<iostream>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include <queue>
#include <vector>
#include<algorithm>
using namespace std;
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
#define sz 10000000
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    getchar();
    while(t--)
    {
        string s;
        int f=0;
        stack<char>stk;
        getline(cin,s);
        loop1:for(i=0; i<s.size(); i++)
        {
             if(s[i]!='('&&s[i]!='[')
                        goto loop1;
            else if(s[i]=='['||s[i]=='(')
                stk.push(s[i]);

            else if(!stk.empty())
            {
                if(s[i]==')'&&stk.top()=='(')
                    stk.pop();
                else if(s[i]==']'&&stk.top()=='[')
                    stk.pop();
                else
                {
                    cout<<"No"<<endl;
                    f=1;
                    break;
                }
            }
            else if(stk.empty())
            {
                cout<<"No"<<endl;
                f=1;
                break;
            }


        }
        if(!stk.empty()&&s.size()%2!=0&&f==0)
            cout<<"No"<<endl;
        else if(stk.empty()&&s.size()%2==0&&f==0)
            cout<<"Yes"<<endl;
     //stk.empty();
    }
    return 0;


}
