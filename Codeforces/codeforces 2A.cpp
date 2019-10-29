#include<iostream>
#include<string>
using namespace std;
int main()
{
    int r,n,m=0,a=0,i,md=0,arr[100];
    string s;
    cin>>r;
    for(i=0; i<r; i++)
    {
        cin>>s>>n;
        /*if(s=="mike")
            m=m+n;
        else if(s=="andrew")
            a=a+n;*/
         arr[i]=arr[i]+n;


    }
     cout<<arr;
     /*if(m>a)
     cout<<"mike"<<"\n";
      if(m<a)
     cout<<"andrew"<<"\n";
     if(m==a)
     {
        md=(m+a)/2;
        for(i=0; i<r; i++)
    {
            if(m==md)
                cout<<"mike";


            if(a==md)
              cout<<"andrew";

    }
     }*/


}
