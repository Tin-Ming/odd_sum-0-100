#include <stdio.h>

int main()
{
    int i, sum;
    for(i = 1; i <= 100; i++){
        if( i%2 != 0 ){
            printf("%d",i);
            sum += i;
            
            if( i == 99 ){
                printf("=%d\n",sum);
            }else{
                printf("+");
            }
            
        }
    }
    
    return 0;
}
