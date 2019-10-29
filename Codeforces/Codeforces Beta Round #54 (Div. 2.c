#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,count=0;
    char str1[100]="hello",str2[100];
    gets(str2);
    j=0;
    for(i=0;str1[i];i++){
        while(str2[j]){
            if(str1[i]==str2[j]){
                count++;
                j++;
                break;
            }
             j++;
        }
    }
    if(count==5)
        printf("YES\n");
    else
        printf("NO\n");
}
