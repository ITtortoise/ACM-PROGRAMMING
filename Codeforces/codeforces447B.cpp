#include<bits/stdc++.h>
using namespace std;
int main()
{
    int I,J,SUM=0,K=1,M,L,P,SUM2=0,MX=-11342,Q;
    int ARR[1000];
    string S;
    cin>>S;
    cin>>M;
    L=S.size();
    for(I=97; I<=122; I++)
    {
        cin>>ARR[I];
        if(ARR[I]>MX)
            MX=ARR[I];
    }

    for(J=0; J<L; J++)
    {
        SUM=SUM+(ARR[int(S[J])]*K);
        K++;
    }

    Q=L+1;
    for(P=1; P<=M; P++)
    {
        SUM2=SUM2+(Q*MX);
        Q++;
    }
    cout<<SUM2+SUM;
    return 0;
}

