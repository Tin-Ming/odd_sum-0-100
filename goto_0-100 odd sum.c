#include <stdio.h>

int main()
{
    int i = 0 , sum = 0;
    here:
    i ++;
    if( i%2 != 0 ){
        printf("%d",i);
        sum += i;
        if( i == 99 ){
            printf("=%d\n",sum);
        }else{
            printf("+");
        }
    }
    
    if( i < 100 ){
        goto here;
    }
    
    
    return 0;
}
