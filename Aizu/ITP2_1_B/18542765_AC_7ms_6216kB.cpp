#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sfi(a)  scanf("%lld",&a)
ll n,m,i,k,j,t,p,q;
deque<ll>mydeq;
deque<ll>::iterator  it;
int main()
{
    sfi(n);
    for(i=0; i<n; i++)
    {
        sfi(q);
        if(q==0)
        {
            sfi(p);
            if(p==0)
            {
                sfi(t);
                mydeq.push_front(t);
            }

            else if(p==1)
            {
                sfi(t);
                mydeq.push_back(t);
            }

        }
        else if(q==1)
        {
            sfi(k);
            printf("%lld\n",mydeq.at(k));

        }
        else if(q==2)
        {
            sfi(t);
            if(t==0)
                mydeq.pop_front();
            else if(t==1)
                mydeq.pop_back();
        }

        

    }
}
