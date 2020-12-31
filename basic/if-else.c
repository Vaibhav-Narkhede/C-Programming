#include<stdio.h>

int main(){
int num;
    printf("Enter Number :");
    scanf("%d",&num);

    if (num < 0){
        printf("%d is negative number\n",num);
    }else if (num < 100){
        printf("%d is less than 100\n",num);
    }else {
        printf("%d is greater than 100\n", num);
    }
}