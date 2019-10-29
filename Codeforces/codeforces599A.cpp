#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b,c,arr[100];
     cin>>a>>b>>c;
     arr[0]=a+b+c;
     arr[1]=b+c+c+b;
     arr[2]=a+c+c+a;
     arr[3]=a+a+b+b;
     sort(arr,arr+4);
     cout<<arr[0];


}
