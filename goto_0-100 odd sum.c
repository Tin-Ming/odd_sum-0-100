/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
