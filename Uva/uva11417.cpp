#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,i,j,rem=0,g=0;
    cin>>N;
    for(i=1; i<N; i++)
    {
        for(j=i+1; j<=N; j++)
        {
            while((i%j)!=0)
            {
                rem=i%j;
                j=rem;
                i=j;
            }
            cout<<j;
        }


    }//cout<<g<<endl;


}

