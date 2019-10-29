#include<bits/stdc++.h>

using namespace std;

int main()

{

   int n,i,sum=0,v=0;

	cin>>n;
	v=1378;

	sum=pow(v,n);
	cout<<sum<<endl;

	int rem=sum%10;
	cout<<rem<<endl;

	return 0;
}
