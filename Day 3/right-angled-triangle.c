#include<stdio.h>
int main(){
    int row;
    printf("enter the number of row:");
    scanf("%d", &row);
    for(int i=0; i <=row; i++){
        for(int j=0; j < i; j++){
            printf("*\t");
        }
        printf("\n");
    }
} 