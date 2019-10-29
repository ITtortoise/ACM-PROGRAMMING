#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p1,p2,t1,t2,max1,max2;
    cin>>p1>>p2>>t1>>t2;
    max1=max((3*p1)/10,((250*p1)-(p1*t1))/250);
    max2=max((3*p2)/10,((250*p2)-(p2*t2))/250);
    //cout<<max1<<max2;
    if(max1>max2)
        cout<<"Misha"<<endl;
    else if(max2>max1)
        cout<<"Vasya"<<endl;
    else if(max1==max2)
        cout<<"Tie"<<endl;
}
