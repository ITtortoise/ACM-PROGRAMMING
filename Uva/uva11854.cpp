#include<bits/stdc++.h>

using namespace std;
int main()
{


    while(1)
    {
        long long a[1000],t1,t2;
        for(int i=0; i<3; i++)
            cin>>a[i];
        if(a[0]==0&&a[1]==0&&a[2]==0)
            break;
        sort(a,a+3);
        t1=(a[0]*a[0])+(a[1]*a[1]);
        t2=sqrt(t1);
        if(t2==a[2])
            cout<<"right"<<endl;
        else
            cout<<"wrong"<<endl;
    }






}
