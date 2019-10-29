#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,i,j,k,m=0,n=0;

    cin>>r>>c;
    char a[r][c];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cin>>a[i][j];
        }

    }
    for(i=0; i<r; i++)
    {
        k=0;
        for(j=0; j<c; j++)
        {
            if(a[i][j]=='S')
                k++;

        }
        if(k==0)
            m++;

    }
    //cout<<m<<endl;

    for(i=0; i<c; i++)
    {
        k=0;
        for(j=0; j<r; j++)
        {
            if(a[j][i]=='S')
                k++;

        }
        if(k==0)
            n++;

    }//cout<<n<<endl;
    cout<<(m*c)+(n*r)-(m*n);

    return 0;


}
