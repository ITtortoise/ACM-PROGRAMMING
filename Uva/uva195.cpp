#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    string s;
    cin>>t;
    getchar();
    for(int i=0; i<t; i++)
    {
        getline(cin,s);
        {
            sort(s.begin(),s.end());
            do
            {
                cout << s << '\n';
            }
            while(next_permutation(s.begin(),s.end()));
        }
        s="";
    }
    return 0;
}
