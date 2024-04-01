#include<stdio.h>

int main(){

    short int a = 32770;    //2
    printf("%d" , a);
    printf("   %hu  " , a);
    printf("\nSize of short int a : %d bytes\n" , sizeof(a));
    return 0;
}