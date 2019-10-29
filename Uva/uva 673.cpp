#include<bits/stdc++.h>
#include<stack>
using namespace std;
#define sz 10000000
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    for(int T=0;T<t;T++)
    {
        int i,c=0,c1=0;
        string s1,s;
        stack<char>stk;
        getline(cin,s1);
        for(i=0; i<s1.size(); i++)
        {
            if(isspace(s1[i]));
            else
                s+=s1[i];
        }

        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='['||s[i]=='(')
            {
                stk.push(s[i]);
                c++;
            }
            else if((s[i]==']'||s[i]==')')&&!stk.empty())
            {
                if((s[i]==']'&&stk.top()=='[')||(s[i]==')'&&stk.top()=='('))
                {
                    stk.pop();
                    c1++;
                }
            }
            else
                break;
        }
        //cout<<c;
        if(c1==c&&(c+c1)==s.size())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }


}

