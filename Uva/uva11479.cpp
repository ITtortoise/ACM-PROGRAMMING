#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int t=1; t<=T; t++)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        if(a+b<=c||b+c<=a||c+a<=b||a<=0||b<=0||c<=0)
            cout<<"Case "<<t<<": Invalid"<<endl;
        else if(a==b&&b==c)
            cout<<"Case "<<t<<": Equilateral"<<endl;
        else if(a==b||b==c||c==a)
            cout<<"Case "<<t<<": Isosceles"<<endl;
        else
            cout<<"Case "<<t<<": Scalene"<<endl;
    }
    return 0;
}
