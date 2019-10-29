#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i , x , n ;
    scanf("%d", &n);
    for(i = 0 ; i < n ; i++){
        scanf("%d" , &x);
        if(x%2==1){
            printf("First\n");
            return 0;
        }
    }
    printf("Second\n");
    return 0;
}
