#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,r1=0,r2=1,r3=1,r4=1,A[100],i,r5=0,r6=0;
    cin>>a>>b>>c;
    r1=a+b*c;
    A[0]=r1;
    r2=a*(b+c);
    A[1]=r2;
    r3=a*b*c;
    A[2]=r3;
    r4=(a+b)*c;
    A[3]=r4;
    r5=a+b+c;
    A[4]=r5;
    r6=(a*b)+c;
    A[5]=r6;
    sort(A,A+6);
    cout<<A[5];

}
