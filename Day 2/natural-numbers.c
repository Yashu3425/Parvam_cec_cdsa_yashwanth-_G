#include<stdio.h>
int  main(){
    int num;
    printf("enter the range to print the number:");
    scanf("%d",&num);
    // for(initilaization; condition; increment/decrement)
    printf("the numbers between 0 to %d are as follows:\n", num);
    for(int i=0; i<=num; i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
}
// num= 8
// step 1:
    i=0, 0<=8 - the
    0%2 = 0 - T 
    0
step 2: i => 1    