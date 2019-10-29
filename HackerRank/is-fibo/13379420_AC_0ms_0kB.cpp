#include<bits/stdc++.h>
using namespace std;
set<int>s1;
set<int>::iterator it;
int main()
{
    long long int n,a,b,f,i,j,t,k,l,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a=0,b=1;
        for(i=0;; i++)
        {
            f=a+b;
            s1.insert(f);
            a=b;
            b=f;
            if(f>=n)
                break;
        }
        it=s1.find(n);
        if(it!=s1.end())
            cout<<"IsFibo"<<endl;
        else
            cout<<"IsNotFibo"<<endl;
    }
}
