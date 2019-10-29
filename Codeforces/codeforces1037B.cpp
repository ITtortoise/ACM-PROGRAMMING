#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,s,i,j,k,a[100009],s1=0,s2=0,ex;
    memset(a,0,sizeof a);
    cin>>n>>s;

    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);

    int t=a[n/2];
    ex=abs(s-t);
    t=t+ex;

    for(i=0; i<n/2; i++)
    {
        if(a[i]>t)
        {
            cout<<t-a[i]<<' ';
            s1=s1+(t-a[i]);
        }
    }

    for(i=(n/2)+1; i<n; i++)
       {
        if(a[i]<t)
        {
            cout<<t-a[i]<<' ';
            s2=s2+(a[i]-t);
        }
    }
    cout<<s1<<' '<<s2<<' ';

    //cout<<min(s1,s2)<<endl;



    main();


}

