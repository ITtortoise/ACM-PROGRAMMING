#include<bits/stdc++.h>
using namespace std;
long long n,m,i,j,k,p,sum=0;
set<int>s;
set<int>::iterator it,it1;
vector<int>vec;


void fun(int sum,set<int>::iterator it)
{

    sum=sum+*it;
    vec.push_back(*it);
    s.erase(*it);
    it1=s.find(m-sum);
    if(it1!=s.end())
    {
        vec.push_back(m-sum);
        s.erase(m-sum);

        for(i=0; i<vec.size(); i++)
            cout<<vec[i]<<' ';
        cout<<endl;

        vec.clear();

        it=s.begin();
        it1=s.begin();
        if(!s.empty())
           fun(0,it);
        else
            return ;

    }

    else
    {
        it++;
        fun(sum,it);


    }

}

int main()
{
    cin>>n>>p;
    for(i=1; i<=n; i++)
        s.insert(i);
    m=((n*(n+1))/2)/p;
    it=s.begin();
    fun(0,it);

}
