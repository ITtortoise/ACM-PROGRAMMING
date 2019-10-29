#include<bits/stdc++.h>
using namespace std;
queue<pair<int,int> >_queue;
pair<int,int>p1;
set<pair<int,int> >s1;
set<int>s2;
vector<int>vec;
char a[125][125];
long long c,r,i,j,p,q,x,y,u,v,ll,rr,uu,dd,k,cnt=0,A,B,C,D,E,F,G,H;
int fun(pair<int,int> p1)
{
    while(!_queue.empty())
    {
        p1=_queue.front();
        x=p1.first;
        y=p1.second;
        //cout<<x<<y<<' ';
        a[x][y]='t';
        _queue.pop();
        for(rr=y+1; rr<=c; rr++)
        {

            if(a[x][rr]=='*')
                break;
            else if(a[x][rr]!='t')
            {
                a[x][rr]='t';
                p1=make_pair(x,rr);
                _queue.push(p1);
                s1.insert(p1);


            }
        }


        for(ll=y-1; ll>=1; ll--)
        {

            if(a[x][ll]=='*')
                break;
            else if(a[x][ll]!='t')
            {
                a[x][ll]='t';
                p1=make_pair(x,ll);
                _queue.push(p1);
                s1.insert(p1);

            }
        }

        for(uu=x-1; uu>=1; uu--)
        {
            if(a[uu][y]=='*')
                break;
            else if(a[uu][y]!='t')
            {
                a[uu][y]='t';
                p1=make_pair(uu,y);
                _queue.push(p1);
                s1.insert(p1);

            }
        }
        for(dd=x+1; dd<=r; dd++)
        {
            if(a[dd][y]=='*')
                break;
            else if(a[dd][y]!='t')
            {
                a[dd][y]='t';
                p1=make_pair(dd,y);
                _queue.push(p1);
                s1.insert(p1);

            }
        }
        for(A=x,B=y; A>=1&&B>=1; A--,B--)
        {
            if(a[A][B]=='*')
                break;
            else if(a[A][B]!='t')
            {
                a[A][B]='t';
                p1=make_pair(A,B);
                _queue.push(p1);
                s1.insert(p1);
            }
        }

        for(C=x,D=y; C<=r&&D<=c; C++,D++)
        {
            if(a[C][D]=='*')
                break;
            else if(a[C][D]!='t')
            {
                a[C][D]='t';
                p1=make_pair(C,D);
                _queue.push(p1);
                s1.insert(p1);
            }
        }
        for(E=x,F=y;E<=r&&F>=1;E++,F--)
        {
            if(a[E][F]=='*')
                break;
            else if(a[E][F]!='t')
            {
                a[E][F]='t';
                p1=make_pair(E,F);
                _queue.push(p1);
                s1.insert(p1);
            }

        }
        for(G=x,H=y;G>=1&&H<=c;G--,H++)
        {
            if(a[G][H]=='*')
                break;
            else if(a[G][H]!='t')
            {
                a[G][H]='t';
                p1=make_pair(G,H);
                _queue.push(p1);
                s1.insert(p1);
            }

        }
    }
    vec.push_back(s1.size());

}

int main()
{

    for(k=1;; k++)
    {
        memset(a,NULL,sizeof(a));
        int cnt=0;
        s2.clear();
        cin>>r>>c;
        if(r==0)
            return 0;
        for(i=1; i<=r; i++)
        {
            for(j=1; j<=c; j++)
            {
                cin>>a[i][j];
            }
        }
        for(i=1; i<=r; i++)
        {
            for(j=1; j<=c; j++)
            {
                if(a[i][j]=='@')
                {
                    s1.clear();
                    //cout<<' '<<i<<' '<<j<<' ';
                    u=i;
                    v=j;
                    s1.insert(make_pair(u,v));
                    p1=make_pair(u,v);
                    _queue.push(p1);
                    fun(p1);
                }
            }
        }
        cout<<vec.size()<<endl;
        vec.clear();
    }
}
