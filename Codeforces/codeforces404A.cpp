#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,i,j,k=0,u=0,p,q,m=0;
        cin>>n;
        char s[n][n],c1,c2;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>s[i][j];

            }
            getchar();
        }
        c1=s[0][0];
        c2=s[0][1];
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
            {
                if(s[i][j]==c1)
                      m++;
                if(s[i][j]==c2)
                    k++;
            }
             //cout<<k<<" "<<m;
        if((k+m)!=(n*n)||m!=((n*2)-1)||c1==c2)
        {
            cout<<"NO"<<endl;
            return 0;
        }

        for(i=0; i<n; i++)
            if(s[i][i]==c1)
                u++;
        for(p=0,q=n-1; p<n&&q>=0; p++,q--)
            if(s[p][q]==c1)
                u++;
        //cout<<u;
        if(u==(n*2))
            cout<<"YES"<<endl;
        else if(u!=(n*2))
            cout<<"NO"<<endl;

}

