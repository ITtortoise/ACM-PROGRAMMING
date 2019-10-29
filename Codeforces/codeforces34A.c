#include<stdio.h>
int main()

{long long int n,i,sum=1,v=0,rem=0,m;
    scanf("%d",&n);
    //m=n;
	v=1378;
	for(i=1;i<=n;i++)
    {sum=sum*v;}
    printf("%d",sum);
	 rem=sum%10;
	//printf("%d",rem);

	return 0;
}
