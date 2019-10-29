#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t1,t2,f,a,arr[1000],c,tm,T;
    cin>>T;
   for(int t=1;t<=T;t++)
    { c=0;tm=0;
        cin>>t1>>t2>>f>>a;
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+3);
    c=(arr[1]+arr[2])/2;
    //cout<<c;
    tm=t1+t2+f+a+c;
    //cout<<tm;
    if(tm>=90)
        cout<<"Case "<<t<<": A"<<endl;
    else if(tm>=80&&tm<90)
        cout<<"Case "<<t<<": B"<<endl;
    else if(tm>=70&&tm<80)
        cout<<"Case "<<t<<": C"<<endl;
    else if(tm>=60&&tm<70)
         cout<<"Case "<<t<<": D"<<endl;
    else if(tm<60)
         cout<<"Case "<<t<<": F"<<endl;}

   return 0;

}
