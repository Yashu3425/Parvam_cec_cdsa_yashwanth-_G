#include<stdio.h>
int mian(){
    int num, fact=1;
    // unsigned long long fact=1;
    printf("enter a number to find the factorial:");
    scanf("%d", &num);
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("factorial of %d: %d", num, fact);
    // printf("factorial of %d: %llu", num, fact);
}
//
    