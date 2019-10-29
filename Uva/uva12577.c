#include<stdio.h>
int main()
{
    char ch[20];
    int kase=1;
    while(1)
     {
        scanf("%s",ch);
        if(ch[0]=='*')
            break;
        else if(ch[0]=='H')
            printf("Case %d: Hajj-e-Akbar\n",kase++);
        else if(ch[0]=='U')
            printf("Case %d: Hajj-e-Asghar\n",kase++);
    }


    return 0;
}

