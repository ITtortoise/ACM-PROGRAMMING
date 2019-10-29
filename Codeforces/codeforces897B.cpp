#include<bits/stdc++.h>
using namespace std;
long long arr[1000005];
int main()
{
	long long sum=0,j=0;
	string s1,s2;
	long long k,p;
	cin>>k>>p;
	for(long long i=1; ;i++)
	{
	  s1=to_string(i);
	  s2=s1;
	  reverse(s1.begin(),s1.end());
	  s2+=s1;
	  cout<<arr[j]<<" ";
	  arr[j++]=stoll(s2);

	  sum=(sum%p+arr[j-1]%p)%p;
	  if(j==k)
	  break;
	}
	//cout<<sum<<endl;
}
